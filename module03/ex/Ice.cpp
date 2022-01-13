/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:40:32 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 21:38:50 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    _type = "ice";
    std::cout << "Default Constructor called from Ice" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Destructor called from Ice" << std::endl;
}

Ice::Ice(Ice const& c1)
{
	std::cout << "Copy Constructor called from Ice" << std::endl;
	*this = c1;
}

Ice&   Ice::operator=(Ice const& c1)
{
    _type = c1._type;
    return (*this);
}

AMateria* Ice::clone() const
{
    AMateria    *materiaIce = new Ice();
    return (materiaIce);
};

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
