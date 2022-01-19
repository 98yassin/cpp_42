/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:56:24 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/19 15:18:41 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int a = 2;
    int b = 3;
    int *aa = &a;
    int *bb = &b;

    swap(aa, bb);
    std::cout << "a = " << *aa << ", b = " << *bb << std::endl;
    std::cout << "min(a, b) = " << min(*aa, *bb) << std::endl;
    std::cout << "max(a, b) = " << max(*aa, *bb) << std::endl;
    return 0;
}