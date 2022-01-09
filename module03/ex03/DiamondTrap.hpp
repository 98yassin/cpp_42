/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:28:05 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/09 20:08:14 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class  DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _Name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap & d1);
    DiamondTrap & operator=(const DiamondTrap & d1);
    
    void attack(std::string target);
    void whoAmI();
    ~ DiamondTrap();
};

#endif
