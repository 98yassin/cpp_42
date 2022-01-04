/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:38:56 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/04 14:55:58 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_pf_num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & f1)
{
    std::cout << "Copy constructor called" << std::endl;
    _pf_num = f1._pf_num;
    //this->setRawBits(f1._pf_num);
    //*this = f1;
}

Fixed& Fixed::operator=(Fixed const & f2)
{
    std::cout << "Assignation operator called" << std::endl;
    setRawBits(f2.getRawBits());
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_pf_num);
}

void Fixed::setRawBits(int const raw)
{
    _pf_num = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
