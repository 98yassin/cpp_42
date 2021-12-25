/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 00:16:12 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 00:16:14 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

zombie::zombie()
{
	std::cout<<"constructor"<<std::endl;
}

zombie::~zombie()
{
	std::cout<<"destructor "<<_name<<std::endl;
}

void    zombie::setname(std::string name)
{
    this->_name = name;
}

void	zombie::annouce(void)
{
	std::cout<<"<"<<_name<<">"<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}
