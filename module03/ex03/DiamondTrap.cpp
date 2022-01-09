/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:28:07 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/09 20:08:13 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap:: DiamondTrap()
{
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & d1)
{
    std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
    *this = d1;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & d1)
{
    std::cout << "DiamondTrap Assignation operator Called" << std::endl;
    this->_Name = d1._Name;
    this->_name = d1._name;
    this->_hitpoints = d1._hitpoints;
    this->_energy_points = d1._energy_points;
    this->_attack_damage = d1._attack_damage;
    return (*this);
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap Initialize Constructor Called" << std::endl;
    _Name = name;
    ClapTrap::_name = name + "_clap_name";
    _hitpoints = FragTrap::_hitpoints;

    _energy_points = 50;

    _attack_damage = FragTrap::_attack_damage;

}

void DiamondTrap::attack(std::string target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name:" << this->_Name << std::endl;
    std::cout << "Diamond ClapTrap name:" << ClapTrap::_name << std::endl;
}

DiamondTrap::~ DiamondTrap()
{
    std::cout << "DiamondTrap Destructor Called" << std::endl;
}
