/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 08:53:50 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/13 10:09:51 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
private:
    
public:
    Ice();
    ~Ice();
    Ice(const Ice &c1);
    Ice & operator=(const Ice &c1);

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif