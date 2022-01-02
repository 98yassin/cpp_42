/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:33:34 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/02 03:15:55 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

void    karen::debug(void)
{
    std:: cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    karen::info(void)
{
    std::cout<< "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    karen::warning(void)
{
    std::cout<< "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    karen::error(void)
{
    std::cout<< "This is unacceptable, I want to speak to the manager now."<< std::endl;
}

karen::karen()
{
}

karen::~karen()
{
}

void    karen::complain(std::string level)
{
    std::string str[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"};
    ptr_to_karen_func ptr[4] = {
        &karen::debug,
        &karen::info,
        &karen::warning,
        &karen::error};
    
    int i = 0;
    while (i < 4)
    {
        if (str[i] == level)
            ((*this).*ptr[i])();
        i++;
    }
}
