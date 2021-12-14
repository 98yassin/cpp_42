/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:19:40 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/11 11:19:45 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **argv)
{  
	if (ac > 1)
	{
		int i;
		int j;

		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				putchar(toupper(argv[i][j]));
				j++;
			}
			i++;
		}
		std::cout<< std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	
}
