/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:28:51 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 09:45:10 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

cat::cat()
{
    type = "cat";
    std::cout << "cat default constructor called" << std::endl;
}

cat::cat(const cat &c1)
{
    std::cout << "copy constructor called" << std::endl;
    *this = c1;
}

cat &cat::operator=(const cat &c1)
{
    std::cout << "assignement operator called" << std::endl;
    type = c1.type;
    return(*this);
}

void cat::makeSound() const
{
    std::cout << "the cat says: meow meow" << std::endl;
}

cat::~cat()
{
    std::cout << "cat destructor called" << std::endl;
}
