/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:44:44 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/13 16:13:04 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* _inventory[4];
    int _count_m;
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &ms1);
    MateriaSource & operator=(const MateriaSource &ms1);
    
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
    void delete_inv();
};

#endif