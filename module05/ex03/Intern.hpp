/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:14:27 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/16 20:15:43 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern const &in);
    Intern& operator=(Intern const &in);
    Form* makeForm(std::string, std::string);
    ~Intern();
    class ErrorException : public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif