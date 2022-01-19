/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:00:56 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/18 12:00:58 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>


class Base
{
public:
    virtual ~Base() {};
};

class A : public Base
{
public:
    ~A()
    {
        std::cout << "A destructor called" << std::endl;
    }
};

class B : public Base
{
public:
    ~B()
    {
        std::cout << "B destructor called" << std::endl;
    }
};

class C : public Base
{
public:
    ~C()
    {
        std::cout << "C destructor called" << std::endl;
    }
};

Base * generate(void)
{
    srand(time(NULL));
    
    int random = rand() % 3;

    if (random == 0)
    {
        return (new A);
    }
    else if (random == 1)
    {
        return (new B);
    }
    else
    {
        return (new C);
    }
}

void identify(Base* p)
{
    A *Aptr = dynamic_cast<A*>(p);

    if (Aptr != nullptr)
    {
        std::cout << "A" << std::endl;
         return ;
    } 

    B *Bptr = dynamic_cast<B*>(p);

    if (Bptr != nullptr)
    {
        std::cout << "B" << std::endl;
         return ;
    } 
    C *Cptr = dynamic_cast<C*>(p);

    if (Cptr != nullptr)
    {
        std::cout << "C" << std::endl;
         return ;
    } 
}

void identify(Base& p)
{
    try
    {
        A &Aref = dynamic_cast<A&>(p);
        (void)Aref;
        std::cout << "A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }
    try
    {
        B &Bref = dynamic_cast<B&>(p);
        (void)Bref;
        std::cout << "B" << std::endl;
         return ;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }
    try
    {
        C &Cref = dynamic_cast<C&>(p);
        (void)Cref;
        std::cout << "C" << std::endl;
         return ;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }
}


int main()
{
    Base *ptr = generate();
    identify(ptr);

    identify(*ptr);
    
    delete ptr;
    return 0;
}