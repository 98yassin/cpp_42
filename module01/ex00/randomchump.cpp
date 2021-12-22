/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomchump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:23:48 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/22 22:23:51 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void	randomchump(std::string name)
{
	zombie *z;

	z = newZombie(name);
	z->annouce();
	delete z;
}
