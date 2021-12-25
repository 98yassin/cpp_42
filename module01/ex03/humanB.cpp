/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 02:18:01 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 02:18:02 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanB.hpp"

humanB::humanB(std::string name) : _name(name)
{

}

humanB::~humanB()
{
    
}

void    humanB::setweapon(weapon &w)
{
    _w = &w;
}

void    humanB::attacks()
{
    std::cout<<_name<<"attacks with his "<<_w->getType()<<std::endl;
}
