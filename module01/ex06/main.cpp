/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 03:12:56 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/02 03:41:11 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int	check_arg(std::string str)
{
	if (str == "DEBUG")
		return (DEBUG);
	else if (str == "INFO")
		return (INFO);
	else if (str == "WARNING")
		return (WARNING);
	else if (str == "ERROR")
		return (ERROR);
	else
		return (-1);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "error: arguments!!" << std::endl;
		return 1;
	}
	std::string str = av[1];
	
	switch (check_arg(str))
	{
	case DEBUG:
		std::cout << "[DEBUG]" << std::endl;
		std:: cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	case INFO:
		std::cout << "[INFO]" << std::endl;
		std::cout<< "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	case WARNING:
		std::cout << "[WARNING]" << std::endl;
		std::cout<< "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	case ERROR:
		std::cout << "[ERROR]" << std::endl;
		std::cout<< "This is unacceptable, I want to speak to the manager now." << std::endl;
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
