/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:25:42 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 15:18:22 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _brain = new Brain();
    type = "dog";
    std::cout << "dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &d1)
{
    std::cout << "copy constructor called" << std::endl;
    *this = d1;
}

Dog & Dog::operator=(const Dog &d1)
{
    std::cout << "assignement operator called" << std::endl;
    type = d1.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "the dog says: how how" << std::endl;
}

Dog::~Dog()
{
    std::cout << "dog destructor called" << std::endl;
    delete _brain;
}
