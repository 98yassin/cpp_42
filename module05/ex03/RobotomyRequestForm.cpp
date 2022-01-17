/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:13:36 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/16 20:07:16 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Default Constructor called RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm (std::string target):Form("RobotForm", 72, 45), _target(target)
{
    std::cout << "Parametrized Constructor called RobotomyRequestform" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& rrf):Form(rrf), _target(rrf._target)
{
    std::cout << "Copy Constructor called RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm&    RobotomyRequestForm::operator=(RobotomyRequestForm const& rrf)
{
    Form::operator=(rrf);
    this->_target = rrf._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called RobotomyRequestForm" << std::endl;
}

void    RobotomyRequestForm::action() const
{
    srand(time(0));
    int x = rand();
    if (x % 2)
        std::cout << "<" << this->_target << "> has been robotomized successfuly" << std::endl;
    else
        std::cout << "<" << this->_target << "> failure" << std::endl;
}
