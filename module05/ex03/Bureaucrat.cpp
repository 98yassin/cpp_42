/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:15:54 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/16 20:26:52 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor Called Bureaucrat" << std::endl;
}
Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name), _grade(grade)
{
    std::cout<< "Initialize Constructor Called Bureaucrat" << std::endl;   
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
    std::cout << "Copy constructor Called Bureaucrat" << std::endl;
    *this = b;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &b)
{
    std::cout<< "Assignement operator Called Bureaucrat" << std::endl;
    _grade = b._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Called Bureaucrat" << std::endl;
}
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too Hight");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
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

void Bureaucrat::increment()
{
    _grade--;
    if (_grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrement()
{
    _grade++;
    if (_grade > 150)
        throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & b)
{
    os << b.getGrade();
    return (os);
}

void    Bureaucrat::signForm(Form &f1)
{
    try
    {
        f1.beSigned(*this);
        std::cout <<"<"<<_name<<"> signs <"<<f1.getName()<<">"<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout <<"<"<<_name<<"> cannot sign because <"<<e.what()<<">"<<std::endl;
    }
    
}

void	Bureaucrat::executeForm(Form const& form)
{
	try
	{
		form.execute(*this);
		std::cout << "<" << this->getName() << "> executes <" << form.getName() << ">" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "<" << this->getName() << "> cannot executes <" << form.getName() << "> because " << e.what() << std::endl;
	}
}
