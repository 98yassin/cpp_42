/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:56:13 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/19 19:56:54 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void    print(T const & t)
{
    std::cout << t << std::endl;
}

template <typename T>
void    iter(T *a, int size, void(*print)(T const &))
{
    for (int i = 0; i < size; i++)
    {
        (*print)(a[i]);
    }    
}

#endif
