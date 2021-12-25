/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 02:15:42 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 02:15:44 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"
#include "humanA.hpp"
#include "humanB.hpp"

int main()
{
    {
        weapon club = weapon("crude spiked club");//0xfweapon
        humanA bob("Bob", club);
        bob.attacks();
        club.setType("some other type of club");
        bob.attacks();
    }
    
    {
        weapon club = weapon("crude spiked club");//0xfweapon
        humanB jim("Jim");
        jim.setweapon(club);
        jim.attacks();
        club.setType("some other type of club");
        jim.attacks();
    }
}
