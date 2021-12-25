/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 00:16:00 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/25 00:16:02 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <new>

class zombie
{
private:
	std::string _name;
public:
	zombie();
	~zombie();

    void    setname(std::string name);
	void	annouce(void);
};

zombie* zombiehorde( int N, std::string name );

#endif
