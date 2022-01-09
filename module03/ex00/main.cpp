/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 05:15:53 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/09 09:09:14 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap c("claptrap name");
	ClapTrap a(c);
	
	a.attack("target");
	a.takeDamage(12);
	a.beRepaired(12);
	return 0;
}
