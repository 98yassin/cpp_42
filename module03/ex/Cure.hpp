/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:40:30 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 21:14:18 by yait-kad         ###   ########.fr       */
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
    Cure(const Cure &c1);
    Cure & operator=(const Cure &c1);
    ~Cure();
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif
