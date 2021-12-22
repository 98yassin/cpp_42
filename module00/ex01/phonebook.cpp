/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:54:53 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/16 14:54:57 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	print()
{
	std::cout << "\t########### My Awesome PhoneBook ############" << std::endl;
	std::cout << "\t### you can’t store more than 8 contacts  ###" << std::endl;
	std::cout << "\t### enter one of this command:            ###" << std::endl;
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

void	print_columns()
{
	std::cout << "\t";
	std::cout << "index     |";
	std::cout << "first name|";
	std::cout << "last name |";
	std::cout << "login:    |" << std::endl;
}

int		check_error(std::string str)
{
	int i;

	i = 0;

	if (str[i] == '-' || str[i] == '+')
		if (!isdigit(str[++i]))
			return (false);
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

int main()
{
	Contact	contact[8];
	std::string str;
	int i;

	i = 0;
	str = "NULL";
	while (str != "EXIT" && str != "exit")
	{
		print();
		std::cout << "please enter the command :" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			break ;
		if (str == "ADD" || str == "add")
		{
			if (i < 8)
			{
				contact[i].add();
				i++;
			}
			else if (i == 8)
				contact[i - 1].add();
		}
		else if (str == "SEARCH" || str == "search")
		{
			std::cout << "\t##########      SEARCH     ##########" << std::endl;
			contact->search(contact, i);
		}
	}
}
