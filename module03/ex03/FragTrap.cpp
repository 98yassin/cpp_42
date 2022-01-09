/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:37:36 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/09 19:53:48 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Initialize Constructor Called" << std::endl;
    _name = name;
    _hitpoints = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &ft1)
{
    std::cout << "FragTrap Copy Constructor Called" << std::endl;
    *this = ft1;
}

FragTrap & FragTrap::operator=(const FragTrap &ft1)
{
    std::cout << "FragTrap Assignation operator Called" << std::endl;
    this->_name = ft1._name;
    this->_hitpoints = ft1._hitpoints;
    this->_energy_points = ft1._energy_points;
    this->_attack_damage = ft1._attack_damage;
    return (*this);
}

void	FragTrap::attack(std::string target)
{
	std::cout << "FragTrap <" << this->_name << ">" << "attack <" << target << ">,";
	std::cout << " causing <" << this->_attack_damage << "> points of damage !" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "positive high fives request" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}
