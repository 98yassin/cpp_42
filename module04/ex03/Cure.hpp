/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 09:02:19 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/13 10:11:49 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    
public:
    Cure();
    ~Cure();
    Cure(const Cure &c1);
    Cure & operator=(const Cure &c1);
    
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif