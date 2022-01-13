/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:17:17 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 15:23:14 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *m[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            m[i] = new Dog();
        else
            m[i] = new Cat();
    }
    for (int j = 0; j < 10; j++)
    {
        delete m[j];
    }
    
    return 0;
    
}
