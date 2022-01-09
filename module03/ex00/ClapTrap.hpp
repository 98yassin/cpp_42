/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 05:15:51 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/09 10:31:11 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string _name;
    int         _hitpoints;
    int         _energy_points;
    int         _attack_damage;
public:
    ClapTrap();
    ~ClapTrap();
    
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &c1);
    ClapTrap & operator=(const ClapTrap &c1);
    
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif
