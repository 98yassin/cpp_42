/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:37:25 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/20 21:38:47 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class span
{
private:
    unsigned int _N;
    std::vector<int> v;
public:
    span();
    span(unsigned int);
    span(span const &);
    span &operator=(span const &);
    void    addNumber(int);
    void    addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
    int shortestSpan();
    int longestSpan();
    class outOflimit : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class NoNumber : public std::exception
    {
    public:
        const char *what() const throw();
    };
    ~span();
};


#endif