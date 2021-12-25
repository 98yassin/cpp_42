/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 02:16:41 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 02:16:43 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

weapon::weapon(std::string type):_type(type)
{
    
}

weapon::~weapon()
{
    
}

std::string&    weapon::getType()
{
    return _type;
}

void    weapon::setType(std::string type)
{
    _type = type;
}
