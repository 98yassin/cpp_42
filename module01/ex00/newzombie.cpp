/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newzombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:22:36 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/22 22:22:38 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

zombie* newZombie(std::string name)
{
	zombie *z = new zombie(name);
	return (z);
}
