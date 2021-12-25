/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 02:17:16 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 02:17:18 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class weapon
{
private:
    std::string _type;
public:
    weapon(std::string type);
    ~weapon();

    std::string&    getType();
    void            setType(std::string type);
};

#endif
