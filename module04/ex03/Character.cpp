/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 09:20:41 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/13 16:11:59 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():_count_m(0)
{
    std::cout << "Default constructor called Character" << std::endl;
}

Character::~Character()
{
    std::cout << "Destructor called Character" << std::endl;
    deleting_inv();
}

Character::Character(const Character &c1)
{
    std::cout << "copy constructor called Character" << std::endl;
    *this = c1;
}

Character & Character::operator=(const Character &c1)
{
    std::cout << "Assignement operator called Character" << std::endl;
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
    std::cout << "initialize constructor called Character" << std::endl;
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

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        _inventory[idx] = NULL;
    }
    _count_m--;
    for (int i = idx; i < _count_m; i++)
    {
        _inventory[i] = _inventory[i + 1];
    }
    
}

void Character::use(int idx, ICharacter& target)
{
    _inventory[idx]->use(target);
}

void Character::deleting_inv()
{
    for (int i = 0; i < _count_m; i++)
    {
        delete _inventory[i];
    }
}
