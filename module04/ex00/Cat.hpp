/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:28:42 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/12 09:53:01 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class cat : public animal
{  
public:
    cat();
    cat(const cat &c1);
    cat & operator=(const cat &c1);
    ~cat();
    
    void makeSound() const;
};

#endif
