/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 21:52:29 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 21:54:01 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
	this->_nbMateria = 0;
	std::cout << "Default constructor called from MateriaSource" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout <<  "Destructor called from MateriaSource" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
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

MateriaSource&	MateriaSource::operator=(MateriaSource const &ms1)
{
	this->_nbMateria = ms1._nbMateria;
	DeleteInventory();
	for (int i = 0; i < ms1._nbMateria; i++)
		inventory[i] = ms1.inventory[i]->clone();
	return (*this);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_nbMateria; i++)
		if (type == this->inventory[i]->getType())
			return (this->inventory[i]->clone());
	return (0);
}

void	MateriaSource::DeleteInventory()
{
	for (int i = 0; i < this->_nbMateria; i++)
	{
		delete this->inventory[i];
		this->inventory[i] = NULL;
	}
}
