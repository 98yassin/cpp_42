/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:22:16 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/22 22:22:19 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

zombie::zombie(std::string n):_name(n)
{
	std::cout<<"constructor"<<std::endl;
}

zombie::~zombie()
{
	std::cout<<"destructor "<<_name<<std::endl;
}

void	zombie::annouce(void)
{
	std::cout<<"<"<<_name<<">"<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}
