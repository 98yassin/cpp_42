/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:01:44 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/22 16:01:45 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class zombie
{
private:
	std::string _name;
public:
	zombie(std::string name);
	~zombie();

	void	annouce(void);
};


zombie*	newZombie(std::string name);
void	randomchump(std::string name);

#endif
