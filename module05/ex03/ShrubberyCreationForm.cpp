/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:12:09 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/16 15:23:36 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout<<"Default constructor Called ShrubberyCreationForm"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyForm", 145, 137),_target(target)
{
    std::cout<<"Parameterize constructor Called ShrubberyCreationForm"<<std::endl;
    
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sh1):Form(sh1), _target(sh1._target)
{
    std::cout<<"Copy constructor Called ShrubberyCreationForm"<<std::endl;
    //*this = sh1;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &sh1)
{
    std::cout<<"Assignement Operator Called ShrubberyCreationForm"<<std::endl;
    _target = sh1._target;
    Form::operator=(sh1);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout<<"Destructor Called ShrubberyCreationForm"<<std::endl;
}

void ShrubberyCreationForm::action() const
{
    std::ofstream outfile;
    outfile.open(_target + "_shrubbery");
    outfile<<"                              # #### ####"<<std::endl;
    outfile<<"                            ### \\/#|### |/####"<<std::endl;
    outfile<<"                           ##\\/#/ \\||/##/_/##/#"<<std::endl;
    outfile<<"                         ###  \\/###|/ \\/ # ###"<<std::endl;
    outfile<<"                       ##_\\_#\\_\\## | #/###_/_####"<<std::endl;
    outfile<<"                      ## #### # \\ #| /  #### ##/###"<<std::endl;
    outfile<<"                       __#_--###`  |{,###---###-~"<<std::endl;
    outfile<<"                                 \\ }{"<<std::endl;
    outfile<<"                                  }}{"<<std::endl;
    outfile<<"                                  }}{"<<std::endl;
    outfile<<"                                  {{}"<<std::endl;
    outfile.close();
    std::cout << "file created successfuly"<<std::endl;
}
