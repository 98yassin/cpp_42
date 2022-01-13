/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 08:54:03 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/13 10:11:06 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &c1)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = c1;
}

Ice & Ice::operator=(const Ice &c1)
{
    std::cout << "Assignement operator called" << std::endl;
    _type = c1._type;
}

AMateria* Ice::clone() const
{
    AMateria *m = new Ice();
    return (m);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<<target.getName() << "*"<<std::endl;
}
