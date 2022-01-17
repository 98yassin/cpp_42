/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 08:46:10 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/16 19:55:41 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_grade_sign;
	const int			_grade_exec;
public:
	Form();
	~Form();
	Form(const std::string name, const int grade_sign, const int grade_exec);
	Form(const Form &f1);
	Form & operator=(const Form &f1);

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();  
	};
	class UnsignedFormException : public std::exception
	{
		virtual const char* what() const throw();
	};
		
	const std::string&	getName() const;
	bool const &		getSign() const;
	int const &			getGradeSign() const;
	int	const &			getGradeExec() const;
	
	void beSigned(Bureaucrat &b);
	virtual void action() const = 0;
	virtual void execute(Bureaucrat const & executor) const;
};

std::ostream & operator<<(std::ostream &os, Form & f1);

#endif