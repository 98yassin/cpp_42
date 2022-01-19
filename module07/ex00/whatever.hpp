/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:56:40 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/19 19:46:13 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream> 

template <typename T>
void swap(T &a, T& b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template <typename T>
T min(T &a, T &b)
{
	return((a < b) ? a : b);
}

template <typename T>
T max(T &a, T &b)
{
	return((a > b) ? a : b);
}

#endif
