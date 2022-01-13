/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:25:44 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 09:53:05 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class dog : public animal
{  
public:
    dog();
    dog(const dog &d1);
    dog & operator=(const dog &d1);
    ~dog();
    
    void makeSound() const;
};

#endif
