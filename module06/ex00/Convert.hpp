/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:33:14 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/18 08:54:42 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTION_HPP
#define CONVERTION_HPP
#include <iostream>
#include <limits>
#include <iomanip>

class Convert
{
private:
    std::string _arg;
    std::string _type;
    char _char;
    int _int;
    float _float;
    double _double;
    bool _print_int;

    void getType();
    bool argIsInt();
    bool argIsFloat();
    bool argIsDouble();
    bool argIsChar();
    
    void cast();
    void castFromChar();
    void castFromInt();
    void castFromFloat();
    void castFromDouble();

    void printAll() const;
    void printChar() const ;
    void printInt() const ;
    void printFloat() const ;
    void printDouble() const ;

    Convert();

public:
    Convert(std::string const &arg);
    Convert(Convert const &obj);
    Convert &operator=(Convert const &obj);
    ~Convert();
};

#endif