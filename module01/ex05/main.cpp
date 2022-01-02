/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:33:04 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/31 15:33:07 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "karen.hpp"

int main()
{
    karen msg;
    std::string level;
    std::cout << "enter a level: ";
    std::cin >> level;

    msg.complain(level);
    return (0);
}