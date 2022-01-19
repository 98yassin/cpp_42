/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:56:40 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/19 15:35:14 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

template <typename T>
void    swap(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = a;
}

template <typename T>
T       min(T &a, T &b)
{
    return ((a < b) ? a : b);
}

template <typename T>
T       max(T &a, T &b)
{
    return ((a > b) ? a : b);
}

#endif
