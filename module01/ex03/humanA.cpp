/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 02:17:55 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 02:17:56 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanA.hpp"

humanA::humanA(std::string name, weapon &w): _w(w), _name(name)
{

}

humanA::~humanA()
{

}

void    humanA::attacks()
{
    std::cout<<_name<<"attacks with his "<<_w.getType()<<std::endl;
}