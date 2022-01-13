/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:17:17 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 16:14:45 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *m[4];
    for (int i = 0; i < 4; i++)
    {
        if (i < 2)
        {
            m[i] = new Dog();
            m[i]->makeSound();
        }
        else
        {
            m[i] = new Cat();
            m[i]->makeSound();
        }
    }
    for (int j = 0; j < 4; j++)
    {
        delete m[j];
    }
    
    return 0;
    
}
