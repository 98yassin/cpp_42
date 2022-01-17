/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:13:31 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/16 15:22:48 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Default Constructor called PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "Parametrized Constructor called PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& ppf):Form(ppf), _target(ppf._target)
{
    std::cout << "Copy Constructor called PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm&    PresidentialPardonForm::operator=(PresidentialPardonForm const& ppf)
{
    this->_target = ppf._target;
    Form::operator=(ppf);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor called PresidentialPardonForm" << std::endl;
}

void    PresidentialPardonForm::action() const
{
    std::cout << "<" << this->_target << "> has pardoned by Zafod Beeblebrox" << std::endl;    
}