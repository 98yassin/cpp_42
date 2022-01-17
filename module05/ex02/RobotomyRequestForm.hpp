/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:13:39 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/16 15:19:00 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm (std::string);
	RobotomyRequestForm(RobotomyRequestForm const &rrf);
	RobotomyRequestForm&    operator=(RobotomyRequestForm const &rrf);
	~RobotomyRequestForm();
    
	void    action() const;
};

#endif
