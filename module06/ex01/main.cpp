/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:04:12 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/18 11:08:14 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>

typedef struct s_data {
    int counter;
    int justData;
}Data;

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t rawBits)
{
    Data *data = reinterpret_cast<Data*>(rawBits);
    return (data);
}

int main()
{
    
    Data data;

    data.counter = 100;
    data.justData = 8000;

    std::cout << " data.counter : " << data.counter << std::endl;
    std::cout << " data.data : " << data.justData << std::endl;

    uintptr_t rawBits = serialize(&data);
    Data *returnedData = deserialize(rawBits);
    std::cout << " data.counter : " << returnedData->counter << std::endl;
    std::cout << " data.data : " << returnedData->justData <<std::endl;
    

    return 0;
}