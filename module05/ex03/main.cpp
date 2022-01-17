/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:54:31 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/16 20:22:30 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat bureaucrat2("Khalid", 5);
		// rrf = someRandomIntern.makeForm("PresidentialPardon", "Bender");
		// rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
		rrf = someRandomIntern.makeForm("ShrubberyCreation ", "Bender");
		bureaucrat2.signForm(*rrf);
		bureaucrat2.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return 0;
}
