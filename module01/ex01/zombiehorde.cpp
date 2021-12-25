/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiehorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 00:15:48 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 00:15:50 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

zombie* zombiehorde( int N, std::string name )
{
    zombie* z = new zombie[N];
    for (int i = 0; i < N; i++)
    {
        z[i].setname(name + std::to_string(i));
    }
    return z;
}
