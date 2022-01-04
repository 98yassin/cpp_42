/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:26:15 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/04 17:57:17 by yait-kad         ###   ########.fr       */
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

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    Fixed(int const a);
    Fixed(float const b);

    float toFloat( void ) const;
    int toInt( void ) const;

};

std::ostream & operator << (std::ostream & os, Fixed const & obj);

#endif
