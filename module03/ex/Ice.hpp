/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:40:34 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 21:30:47 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
private:
    
public:
    Ice();
    Ice(const Ice &c1);
    Ice & operator=(const Ice &c1);
    ~Ice();
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif
