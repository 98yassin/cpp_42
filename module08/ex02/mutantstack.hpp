/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:41:37 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/21 15:06:37 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T, typename container = std::deque<T> >
class mutantstack : public std::stack<T, container>
{ 
    public:
        typedef typename std::stack<T, container>::container_type::iterator iterator;
        typedef typename std::stack<T, container>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T, container>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T, container>::container_type::const_reverse_iterator const_reverse_iterator;
        mutantstack<T, container>(){};
        mutantstack<T, container>(mutantstack<T, container> const &src)
        {
            *this = src;
        }
        mutantstack<T, container> &operator=(mutantstack const &src)
        {
            if (this != src)
            {
                std::stack<T, container>::operator=(src);
            }
            return (*this);
        }
        ~mutantstack<T, container>(){}
        iterator begin() {return (this->c.begin());}
        iterator end(){return (this->c.end());}
        const_iterator begin() const {return (this->c.begin());}
        const_iterator end() const {return (this->c.end());}
        reverse_iterator rbegin() {return (this->c.rbegin());}
        reverse_iterator rend() {return (this->c.rend());}
        const_reverse_iterator rbegin() const {return (this->c.rbegin());}
        const_reverse_iterator rend() const {return (this->c.rend());}
        
};

#endif