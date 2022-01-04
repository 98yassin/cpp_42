/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:38:42 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/04 14:54:29 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
private:
    int _pf_num;
    static const int _b_num;
public:
    Fixed();
    ~Fixed();
    
    Fixed & operator = (Fixed const & f2);
    Fixed(Fixed const & f1);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
