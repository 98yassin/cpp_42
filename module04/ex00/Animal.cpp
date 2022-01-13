/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:17:10 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 09:45:04 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

animal::animal()
{
    std::cout << "animal default constructor called" << std::endl;
}

animal::animal(const animal &a1)
{
    std::cout << "copy constructor called" << std::endl;
    *this = a1;
}

animal & animal::operator=(const animal &a1)
{
    std::cout << "assignement operator called" << std::endl;
    type = a1.type;
    return (*this);
}

void animal::makeSound() const
{
    std::cout << "the animal makes sound" << std::endl;
}

std::string animal::getType() const
{
    return (type);
}

animal::~animal()
{
    std::cout << "animal destructor called" << std::endl;
}
