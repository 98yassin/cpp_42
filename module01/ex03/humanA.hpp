/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 02:17:45 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 02:17:46 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "weapon.hpp"

class humanA
{
private:
    weapon &_w;
    std::string _name;
public:
    humanA(std::string name, weapon &w);
    ~humanA();

    void    attacks();
};

#endif
