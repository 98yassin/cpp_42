/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:13:18 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/09 10:58:29 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constuctor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Initialize Constuctor Called" << std::endl;
    this->_name = name;
    this->_hitpoints = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &st1)
{
    std::cout << "ScavTrap Copy Constuctor Called" << std::endl;
    *this = st1;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &st1)
{
    std::cout << "ScavTrap Assignation Operator Called" << std::endl;
    this->_name = st1._name;
    this->_hitpoints = st1._hitpoints;
    this->_energy_points = st1._energy_points;
    this->_attack_damage = st1._attack_damage;
    return (*this);
}

void    ScavTrap::attack(std::string target)
{
    std::cout << "ScavTrap <" << this->_name << "> attack <" << target << ">, causing <" << this->_attack_damage << "> points of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destuctor Called" << std::endl;
}
