/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:13:20 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/09 12:26:24 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap s1("test_FragTrap");
    FragTrap s2(s1);

    s2.attack("test_target");
    s2.takeDamage(33);
    s2.beRepaired(320);
    s2.highFivesGuys();
    return 0;
}
