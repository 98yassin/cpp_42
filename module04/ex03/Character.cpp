/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 09:20:41 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/13 10:18:02 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():_count_m(0)
{
}

Character::~Character()
{
}

Character::Character(const Character &c1)
{
    std::cout << "copy constructor called" << std::endl;
    *this = c1;
}

Character & Character::operator=(const Character &c1)
{
    std::cout << "Assignement operator called" << std::endl;
    _name = c1._name;
    _count_m = c1._count_m;
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = c1._inventory[i];
    }
    return (*this);
}

Character::Character(std::string name):_name(name), _count_m(0)
{
    
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    if (m)
    {
        if (_count_m < 4)
        {
            _inventory[_count_m] = m;
            _count_m++;
        }
        else
            std::cout << "inventory is full!!" << std::endl;
    }    
}

void Character::use(int idx, ICharacter& target)
{
    _inventory[idx]->use(target);
}
