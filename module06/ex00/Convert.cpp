/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:39:54 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/18 11:59:45 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string const &arg) : _arg(arg), _print_int(true)
{
    this->getType();
}

Convert::~Convert()
{
}

Convert::Convert(Convert const &obj)
{
    *this = obj;
}

Convert &Convert::operator=(Convert const &obj)
{
    if (this != &obj)
    {
        this->_arg = obj._arg;
        this->_type = obj._type;
        this->_char = obj._char;
        this->_int = obj._int;
        this->_float = obj._float;
        this->_double = obj._double;
        this->_print_int = obj._print_int;
    }
    return (*this);
}

void Convert::getType()
{
    if (!this->argIsInt() && !this->argIsChar() && !this->argIsFloat() && !this->argIsDouble())
    {
        std::cout << "argument type unkown" << std::endl;
        return;
    }
    this->cast();
    this->printAll();
}

bool Convert::argIsChar()
{
    if (_arg.length() != 1)
        return (false);
    this->_type = "char";
    this->_char = _arg[0];
    this->_print_int = true;
    return (true);
}

bool Convert::argIsInt()
{
    size_t end_indx;
    try
    {
        this->_int = stoi(_arg, &end_indx);
        if (end_indx != this->_arg.length())
            return (false);
        this->_type = "int";
        return (true);
    }
    catch (const std::exception &e)
    {
        _print_int = false;
        return (false);
    }
}

bool Convert::argIsFloat()
{
    size_t end_indx;

    try
    {
        this->_float = stof(_arg, &end_indx);
        if (this->_arg != "-inff" && this->_arg != "+inff" && this->_arg != "nanf")
        {
            if (end_indx != this->_arg.length() - 1 || _arg.find('.') == std::string::npos || _arg.c_str()[end_indx] != 'f')
                return (false);
        }
        this->_type = "float";
        return (true);
    }
    catch (const std::exception &e)
    {
        return (false);
    }
}

bool Convert::argIsDouble()
{
    size_t end_indx;
    try
    {
        this->_double = stod(_arg, &end_indx);
        if (this->_arg != "-inf" && this->_arg != "+inf" && this->_arg != "nan")
        {
            if (end_indx != this->_arg.length() || ((_arg.find('.')) == std::string::npos) || _arg.c_str()[end_indx] != '\0')
                return (false);
        }
        this->_type = "double";
        return (true);
    }
    catch (const std::exception &e)
    {
        return (false);
    }
}

void Convert::cast()
{
    if (this->_type == "char")
        castFromChar();
    else if (this->_type == "int")
        castFromInt();
    else if (this->_type == "float")
        castFromFloat();
    else if (this->_type == "double")
        castFromDouble();
}

void Convert::castFromChar()
{
    this->_int = static_cast<int>(this->_char);
    this->_float = static_cast<float>(this->_char);
    this->_double = static_cast<double>(this->_char);
}

void Convert::castFromInt()
{
    this->_char = static_cast<char>(this->_int);
    this->_float = static_cast<float>(this->_int);
    this->_double = static_cast<double>(this->_int);
}

void Convert::castFromFloat()
{
    if (_print_int)
    {
        this->_char = static_cast<char>(this->_float);
        this->_int = static_cast<int>(this->_float);
    }
    this->_double = static_cast<double>(this->_float);
}

void Convert::castFromDouble()
{
    if (_print_int)
    {
        this->_char = static_cast<char>(this->_double);
        this->_int = static_cast<int>(this->_double);
    }
    this->_float = static_cast<float>(this->_double);
}

void Convert::printAll() const
{
    printChar();
    printInt();
    printFloat();
    printDouble();
}

void Convert::printChar() const
{
    if (!_print_int || this->_int < -128 || this->_int > 127)
        std::cout << "char: impossible" << std::endl;
    else if (this->_int > 126 || this->_int < 32)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << _char << "'" << std::endl;
}

void Convert::printInt() const
{
    if (!_print_int)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << _int << std::endl;
}

void Convert::printFloat() const
{
    std::cout << "float: " << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
}

void Convert::printDouble() const
{
    std::cout << "double: " << std::fixed << std::setprecision(1) << _double << std::endl;
}
