/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 05:15:56 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/09 10:31:07 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constuctor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Initialize Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c1)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = c1;
}

ClapTrap & ClapTrap::operator= (const ClapTrap &c1)
{
	std::cout << "Assignation Operator Called" << std::endl;
	this->_name = c1._name;
	this->_hitpoints = c1._hitpoints;
	this->_energy_points = c1._energy_points;
	this->_attack_damage = c1._attack_damage;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap <" << this->_name << ">" << "attack <" << target << ">,";
	std::cout << " causing <" << this->_attack_damage << "> points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "takedamage Called, amount :" << amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "beRepaired Called, amount :" << amount << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
}
