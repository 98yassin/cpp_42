/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:42:50 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/07 03:48:39 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int _pf_num;
    static const int _b_num = 8;
public:
    Fixed();
    ~Fixed();

    Fixed(Fixed const & f1);
    Fixed & operator = (Fixed const & f2);

    bool operator > (Fixed const & a);
    bool operator >= (Fixed const & a);
    bool operator < (Fixed const & a);
    bool operator <= (Fixed const & a);
    bool operator == (Fixed const & a);
    bool operator != (Fixed const & a);

    Fixed & operator + (Fixed const & a);
    Fixed & operator - (Fixed const & a);
    Fixed & operator * (Fixed const & a);
    Fixed & operator / (Fixed const & a);
    
    Fixed & operator ++ ();
    Fixed & operator -- ();

    Fixed & operator ++ (int);
    Fixed & operator -- (int);

    Fixed & min (Fixed & a, Fixed & b);
    Fixed & min (Fixed const & a, Fixed const & b);

    Fixed & max (Fixed & a, Fixed & b);
    Fixed & max (Fixed const & a, Fixed const & b);

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    Fixed(int const a);
    Fixed(float const b);

    float toFloat( void ) const;
    int toInt( void ) const;

};

std::ostream & operator << (std::ostream & os, Fixed const & obj);

#endif