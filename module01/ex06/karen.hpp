/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 03:13:17 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/02 03:26:46 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <string>

class karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	karen();
	~karen();

	void    complain(std::string level);
};

typedef void (karen::*ptr_to_karen_func) (void);

typedef enum e_msg{DEBUG, INFO, WARNING, ERROR} t_msg;

#endif