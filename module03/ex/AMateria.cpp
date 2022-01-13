/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:24:59 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 21:35:32 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default Constructor called from AMateria" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Destructor called from AMateria" << std::endl;
}

AMateria::AMateria(AMateria const& am1)
{
	std::cout << "Copy Constructor called from AMateria" << std::endl;
	*this = am1;
}

AMateria&   AMateria::operator=(AMateria const& am1)
{
	this->_type = am1._type;
	return (*this);
}

std::string const&  AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
