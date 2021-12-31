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

void replacing(std::string s1, std::string s2, int found, std::string &line)
{
    size_t len = s1.length();

    line.erase(found, len);
    line.insert(found, s2);
}

int main(int ac, char **args)
{
    if (ac != 4)
    {
        std::cout<<"error: number of arguments!!"<<std::endl;
        return (0);
    }
    std::string line;
    std::string file;
    std::string s1;
    std::string s2;
    int i;
    size_t found;
    
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

    while (getline(infile, line))
    {
        i = 0;
        while (line[i])
        {
            found = line.find(s1,i);
            if (found != std::string::npos)
            {
                replacing(s1, s2, found, line);
                i = found + s2.length();
            }
            else
                i++;
        }
        outfile << line;
		if (!infile.eof())
			outfile << std::endl;
    }
    infile.close();
    outfile.close();
    
    return (0);
}
