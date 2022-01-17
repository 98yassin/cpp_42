/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:54:31 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/15 13:52:46 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("bureaucrat name", 1);
        b1.decrement();
        b1.decrement();
        std::cout << b1 << std::endl;
        Form f1("Form1",2,1);
        //f1.beSigned(b1);
        b1.signForm(f1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
