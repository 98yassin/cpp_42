/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Bureaucrat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:15:54 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/14 12:12:11 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor Called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
    std::cout<< "Initialize Constructor Called" << std::endl;   
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
    std::cout << "Copy constructor Called" << std::endl;
    *this = b;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &b)
{
    std::cout<< "Assignement operator Called" << std::endl;
    _grade = b._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Called" << std::endl;
}
const char * Bureaucrat::GradeTooHighException::what() throw()
{
    return ("Grade Too Hight");
}

const char * Bureaucrat::GradeTooLowException::what() throw()
{
    return ("Grade Too Low");
}

const std::string & Bureaucrat::getName() const
{
    return (_name);
}

const int & Bureaucrat::getGrade() const
{
    return (_grade);
}
