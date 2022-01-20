/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:07:35 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/20 21:35:52 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void    easyfind(T b, int oc)
{
     if (std::find(b.begin(), b.end(), oc) == b.end())
        std::cout << "element " << oc <<  " Not Exist!" << std::endl;
    else
        std::cout << "element " << oc <<  " is Exist!" << std::endl;

}

int main()
{
    std::array<int, 3> arr = {1337, 42, 19};
    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << std::endl;
    }
    easyfind(arr, 42);
    std::vector<int> v;
    v.push_back(1337); 
    v.push_back(42); 
    v.push_back(19); 
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << std::endl;
    }
    easyfind(v, 420);
}
