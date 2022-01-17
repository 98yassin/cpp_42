/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 08:46:15 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/15 13:50:13 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_name(""),_signed(false),_grade_sign(150), _grade_exec(150)
{
    std::cout <<"Form Default Constructor Called" << std::endl;
}

Form::Form(const std::string name, const int grade_sign, const int grade_exec):_name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    std::cout <<"Form parameterize constructor called"<<std::endl;
    if (_grade_sign < 1 || _grade_exec < 1)
        throw GradeTooHighException();
    else if (_grade_exec > 150 || _grade_sign > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &f1):_name(""),_signed(false), _grade_sign(150), _grade_exec(150)
{
    std::cout <<"Form Copy Constructor Called" << std::endl;
    *this = f1;
}

Form & Form::operator=(const Form &f1)
{
    std::cout <<"Form Assignement operator Called" << std::endl;
    this->_signed = f1._signed;
    return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return("Grade Too Low");
}

const std::string& Form::getName()
{
    return (_name);
}

bool Form::getSign()
{
    return (_signed);
}

int const & Form::getGradeSign()
{
    return (_grade_sign);
}

int const & Form::getGradeExec()
{
    return (_grade_exec);
}

Form::~Form()
{
    std::cout <<"Form Destructor Called" << std::endl;
}

std::ostream & operator<<(std::ostream &os, Form &f1)
{
    os << "name :<"<<f1.getName()<<"> sign:<"<<f1.getSign()<<"> grade sign:<"<<f1.getGradeSign()<<"> grade execute:<"<<f1.getGradeExec()<<std::endl;
    return (os);
}

void    Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= _grade_sign)
        _signed = true;
    else
        throw Bureaucrat::GradeTooLowException();
}
