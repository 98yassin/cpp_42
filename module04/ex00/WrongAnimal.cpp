/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:40:53 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 11:11:42 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &w1)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = w1;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &w1)
{
    std::cout << "WrongAnimal Assignement operator called" << std::endl;
    type = w1.type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return(type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal makes sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}
