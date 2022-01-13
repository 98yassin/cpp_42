/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:17:14 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 10:31:54 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class animal
{
protected:
    std::string type;
public:
    animal();
    animal(const animal &a1);
    animal & operator=(const animal &a1);
    virtual ~animal();

    std::string getType() const;
    virtual void makeSound() const;
};

#endif
