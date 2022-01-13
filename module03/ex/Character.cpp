/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 21:47:59 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 21:49:20 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_nbMateria = 0;
	std::cout << "Default Constructor called form Character" << std::endl;
}

Character::Character(std::string name): _Name(name), _nbMateria(0)
{
	std::cout << "Parametrized Constructor called form Character" << std::endl;
}

Character::Character(Character const& c1)
{
	std::cout << "Copy Constructor called from Character" << std::endl;
	*this = c1;
}

Character&	Character::operator=(Character const& c1)
{
	this->_Name = c1._Name;
	this->_nbMateria = c1._nbMateria;
	DeleteInventory();
	for (int i = 0; i < c1._nbMateria; i++)
		inventory[i] = c1.inventory[i]->clone();
	return (*this);
}

Character::~Character()
{
	DeleteInventory();
	std::cout << "Destructor called from Character" << std::endl;
}

std::string const & Character::getName() const
{
	return (this->_Name);
}

void    Character::equip(AMateria* m)
{
	if (!m)
		return ;
	if (_nbMateria > 3)
	{
		std::cout << " Materia in a full inventory" << std::endl;
		return ;
	}
	this->inventory[_nbMateria] = m;
	_nbMateria++;
}

void    Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || idx > _nbMateria)
	{
		std::cout << "idx not found" << std::endl;
		return ;
	}
	std::cout << "unequip" << std::endl;
	this->inventory[idx] = NULL;
	for (int i = idx + 1; i < _nbMateria - 1; i++)
			this->inventory[i] = this->inventory[i + 1];
	this->_nbMateria--;
}

void	Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}

void	Character::DeleteInventory()
{
	for (int i = 0; i < this->_nbMateria; i++)
	{
		delete this->inventory[i];
		this->inventory[i] = NULL;
	}
}