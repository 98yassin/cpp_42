/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:40:27 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 22:03:37 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    _type = "cure";
    std::cout << "Default Constructor called from Cure" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Destructor called from Cure" << std::endl;
}

Cure::Cure(Cure const& c1)
{
	std::cout << "Copy Constructor called from Cure" << std::endl;
	*this = c1;
}

Cure&   Cure::operator=(Cure const& c1)
{
    _type = c1._type;
    return (*this);
}

AMateria* Cure::clone() const
{
    AMateria  *mat = new Cure();
    return (mat);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
