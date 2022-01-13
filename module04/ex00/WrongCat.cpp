/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:40:47 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 11:12:51 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &w1)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = w1;
}

WrongCat & WrongCat::operator=(const WrongCat &w1)
{
    std::cout << "WrongCat Assignement operator called" << std::endl;
    type = w1.type;
    return(*this);
}

void WrongCat::makeSound() const
{
    std::cout << "the WrongCat Says: Meow Meow" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}
