/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:39:23 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/06 20:25:11 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::add()
{
	std::cout << "\t##########           ADD           ##########" << std::endl;
	std::cout << "enter your first name  : ";
	std::getline(std::cin, this->_first_name);

	std::cout << "enter your last name   : ";
	std::getline(std::cin, this->_last_name);

	std::cout << "enter your login       : ";
	std::getline(std::cin, this->_nickname);

	std::cout << "enter your phone number: ";
	std::getline(std::cin, this->_phone_number);
	
	std::cout << "enter your password    : ";
	std::getline(std::cin, this->_darkest_secret);
}

void	Contact::display_contacts(int index)
{
	std::cout << "\t";
	std::cout << std::setw(10) << index << "|";
	set_word(this->_first_name);
	std::cout << "|";
	set_word(this->_last_name);
	std::cout << "|";
	set_word(this->_nickname ) ;
	std::cout << "|";
	std::cout << std::endl;
}

void	Contact::display_contact_info()
{
	std::cout << "\t#################### details #################"<< std::endl;
	std::cout << "\tfirst name    : " << this->_first_name << std::endl;
	std::cout << "\tlast name     : " << this->_last_name << std::endl;
	std::cout << "\tnickname      : " << this->_nickname << std::endl;
	std::cout << "\tphone number  : " << this->_phone_number << std::endl;
	std::cout << "\tdarkest secret: " << this->_darkest_secret << std::endl;
	std::cout << "\t##############################################"<< std::endl;
}

void	Contact::search(Contact *contact, int i)
{
	std::string str;
	int index;
	int j;

	index = -2;
	j = 0;
	print_columns();
	while (j < i)
	{
		contact[j].display_contacts(j);
		j++;
	}

	while (index != -1)
	{
		std::cout << "### if you terminate searching enter -1 ###" << std::endl;
		std::cout << "enter an index: " << std::endl;
		std::getline(std::cin, str);
		if (check_error(str) == false)
			std::cout << "error!! enter a number" << std::endl;
		else
		{
			index = std::atoi(str.c_str());
			if (std::cin.eof())
				break; 
			if (index >= 0 && index < i)
				contact[index].display_contact_info();
			else
				std::cout << "no contact find!!" << std::endl;
		}
	}
}
