/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 08:39:55 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/13 10:08:59 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &am1)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = am1;
}

AMateria & AMateria::operator=(const AMateria &am1)
{
    std::cout << "Assignement operator Called" << std::endl;
    _type = am1._type;
    return (*this);
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
    _type = type;
}

std::string const & AMateria::getType() const
{
    return (_type);
}

