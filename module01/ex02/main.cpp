/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 01:26:07 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 01:26:09 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout<<"adress: "<<&str<<std::endl;
    std::cout<<"adress using stringPTR: "<<stringPTR<<std::endl;
    std::cout<<"adress using stringREF: "<<&stringREF<<std::endl;

    std::cout<<"string content using pointer: "<<*stringPTR<<std::endl;
    std::cout<<"string content using reference: "<<stringREF<<std::endl;
}
