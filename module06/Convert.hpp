/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:33:14 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/17 14:42:17 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Convert_H
# define Convert_H

#include <iostream>
#include <string>

class Convert
{
private:
    std::string str;
public:
    Convert();
    Convert(const Convert &c1);
    Convert & operator=(const Convert &c1);
    ~Convert();

    
};

#endif