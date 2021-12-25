/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 02:18:08 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 02:18:09 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "weapon.hpp"

class humanB
{
private:
    weapon *_w;
    std::string _name;
public:
    humanB(std::string name);
    ~humanB();

    void    attacks();
    void    setweapon(weapon &w);
};

#endif
