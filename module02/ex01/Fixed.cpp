/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:26:08 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/04 18:06:03 by yait-kad         ###   ########.fr       */
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
    *this = f1;
}

Fixed& Fixed::operator=(Fixed const & f2)
{
    std::cout << "Assignation operator called" << std::endl;
    setRawBits(f2._pf_num);
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

Fixed::Fixed(int const a)
{
    std::cout << "int constructor called" << std::endl;
    _pf_num = a * (1 << _b_num);
}

Fixed::Fixed(float const b)
{
    std::cout << "float constructor called" << std::endl;
    _pf_num = roundf(b * (1 << _b_num));
    // _pf_num = b * (1 << 1);
    // _pf_num = b * (1 >> 1);
}

float Fixed::toFloat(void) const
{
    return(_pf_num / (float)(1 << _b_num));
}

int Fixed::toInt(void) const
{
    int result = _pf_num / (1 << _b_num);
    return(result);
}

std::ostream & operator <<(std::ostream & os, Fixed const & obj)
{
    os << obj.toFloat();
    return (os);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
