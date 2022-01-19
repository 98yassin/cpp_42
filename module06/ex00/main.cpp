/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:00:07 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/18 11:06:19 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char const *argv[])
{
    if (argc == 2)
    {
        Convert num(argv[1]);
    }
    else 
        std::cout << "missing argument or more arguments entred" << std::endl;
    return 0;
}
