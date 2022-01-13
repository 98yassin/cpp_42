/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:17:10 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 15:19:13 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &a1)
{
    std::cout << "copy constructor called" << std::endl;
    *this = a1;
}

Animal & Animal::operator=(const Animal &a1)
{
    std::cout << "assignement operator called" << std::endl;
    type = a1.type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "the animal makes sound" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}

Animal::~Animal()
{
    std::cout << "animal destructor called" << std::endl;
}
