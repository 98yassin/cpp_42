/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:39:23 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/11 15:39:26 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

class contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
public:
	void	add();
	void	print();
	void	print_columns();
	void	display_contacts(int index);
	void	search(contact *contact, int i);
	void	display_contact_info();
};

void	contact::add()
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

void	contact::print()
{
	std::cout << "\t######### enter one of this command #########" << std::endl;
	std::cout << "\t### you can’t store more than 8 contacts  ###" << std::endl;
	std::cout << "\t### ADD    : to add a new contact.        ###" << std::endl;
	std::cout << "\t### SEARCH : to search for a contact.     ###" << std::endl;
	std::cout << "\t### EXIT   : to exit the program.         ###" << std::endl;
	std::cout << "\t#############################################" << std::endl;
}

void	set_word(std::string word)
{
	int i;

	i = 0;
	while (i < word.length())
	{
		if (word[i] == '\t')
			word[i] = ' ';
		i++;
	}
	i = 0;
	if (word.length() >= 10)
	{
		while (i < 9)
		{
			std::cout << word[i];
			i++;
		}
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << word;
	
}

void	contact::display_contacts(int index)
{
	std::cout << "\t";
	std::cout << std::setw(10) << index << "|";
	//std::cout << std::setw(10) << this->_first_name << "|";
	//std::cout << std::setw(10) << this->_last_name << "|";
	//std::cout << std::setw(10) << this->_nickname << "|" << std::endl;
	set_word(this->_first_name);
	std::cout << "|";
	set_word(this->_last_name);
	std::cout << "|";
	set_word(this->_nickname ) ;
	std::cout << "|";
	std::cout << std::endl;
}

void	contact::display_contact_info()
{
	std::cout << "first name    : " << this->_first_name << std::endl;
	std::cout << "last name     : " << this->_last_name << std::endl;
	std::cout << "nickname      : " << this->_nickname << std::endl;
	std::cout << "phone number  : " << this->_phone_number << std::endl;
	std::cout << "darkest secret: " << this->_darkest_secret << std::endl;
}

void	contact::print_columns()
{
	std::cout << "\t";
	std::cout << "index     |";
	std::cout << "first name|";
	std::cout << "last name |";
	std::cout << "login:    |" << std::endl;
}

void	contact::search(contact *contact, int i)
{
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
		std::cout << "if you terminate searching enter -1" << std::endl;
		std::cout << "enter an index: " << std::endl;
		std::cin >> index;
		if (std::cin.eof())
			break;
		if (index != -2)
		{ 
			if (index >= 0 && index < i)
				contact[index].display_contact_info();
			else
				std::cout << "no contact find!!" << std::endl;
		}
	}
}

int main()
{
	contact	contact[8];
	std::string str;
	int i;
	int j;

	i = 0;
	j = 0;
	str = "NULL";
	while (str != "EXIT" && str != "exit")
	{
		contact->print();
		std::cout << "please enter the command :" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			break ;
		if (str == "ADD" || str == "add")
		{
			if (i < 3)
			{
				contact[i].add();
				i++;
			}
			else if (i == 3)
			{
				contact[i - 1].add();
			}
		}
		else if (str == "SEARCH" || str == "search")
		{
			std::cout << "\t##########      SEARCH     ##########" << std::endl;
			contact->search(contact, i);
			
		}
	}
}
