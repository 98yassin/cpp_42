/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:12:12 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/16 13:36:10 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <fstream>
#include "Form.hpp"

class  ShrubberyCreationForm : public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &sh1);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm &sh1);
    
    void action() const;
};

#endif