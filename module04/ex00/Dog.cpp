/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:25:42 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 09:45:14 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

dog::dog()
{
    type = "dog";
    std::cout << "dog default constructor called" << std::endl;
}

dog::dog(const dog &d1)
{
    std::cout << "copy constructor called" << std::endl;
    *this = d1;
}

dog & dog::operator=(const dog &d1)
{
    std::cout << "assignement operator called" << std::endl;
    type = d1.type;
    return (*this);
}

void dog::makeSound() const
{
    std::cout << "the dog says: how how" << std::endl;
}

dog::~dog()
{
    std::cout << "dog destructor called" << std::endl;
}
