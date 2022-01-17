/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:39:54 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/17 14:46:06 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
    std::cout << "Default Constructor Called" << std::endl;
}

Convert::Convert(const Convert & c1)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = c1;
}

Convert::~Convert()
{
    std::cout << "Destructor Called" << std::endl;
}
