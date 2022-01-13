/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:28:51 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 15:17:58 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _brain = new Brain();
    type = "cat";
    std::cout << "cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &c1)
{
    std::cout << "copy constructor called" << std::endl;
    *this = c1;
}

Cat &Cat::operator=(const Cat &c1)
{
    std::cout << "assignement operator called" << std::endl;
    type = c1.type;
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "the cat says: meow meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "cat destructor called" << std::endl;
    delete _brain;
}
