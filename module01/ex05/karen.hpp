/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:33:23 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/02 03:15:39 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

# include <iostream>
# include <string>

class karen
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
public:
    karen();
    ~karen();

    void    complain(std::string level);
};

typedef void (karen::*ptr_to_karen_func) (void);

#endif