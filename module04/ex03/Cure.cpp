/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 09:02:28 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/13 10:13:07 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &c1)
{
    std::cout << "Copy Constructro Called" << std::endl;
    *this = c1;
}

Cure & Cure::operator=(const Cure &c1)
{
    std::cout << "Assignement Operator Called" << std::endl;
    _type = c1._type;
}

AMateria* Cure::clone() const
{
    AMateria *m = new Cure();
    return (m);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<"’s wounds *"<<std::endl;
}
