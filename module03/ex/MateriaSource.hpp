/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 21:52:12 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 21:53:03 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "./IMateriaSource.hpp"
#include "./AMateria.hpp"

class MateriaSource : public IMateriaSource 
{
private:
	AMateria    *inventory[4];
	int         _nbMateria;
public:
	MateriaSource();
	virtual	~MateriaSource();
	MateriaSource&	operator=(MateriaSource const& ms1);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
	void	DeleteInventory();
};

#endif