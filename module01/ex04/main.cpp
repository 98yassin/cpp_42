/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 05:49:24 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 05:49:25 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string uppercase(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    return (str);
    
}

int main(int ac, char **args)
{
    if (ac != 4)
    {
        std::cout<<"error: number of arguments!!"<<std::endl;
        return (0);
    }
    std::string file;
    std::string s1;
    std::string s2;
    
    file = args[1];
    s1 = args[2];
    s2 = args[3];

    std::ifstream infile(file);
    if (!infile.is_open())
    {
        std::cout<<"error: file not exist!!"<<std::endl;
        return (0);
    }
    std::ofstream outfile;
    outfile.open(uppercase(file) + ".replace");
    
    
    return (0);
}
