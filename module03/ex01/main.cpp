/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:13:20 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/09 11:31:36 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap s1("test_scavtrap");
    ScavTrap s2(s1);

    s2.attack("test_target");
    s2.takeDamage(23);
    s2.beRepaired(32);
    s2.guardGate();
    return 0;
}
