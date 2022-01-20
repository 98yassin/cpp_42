/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:37:18 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/20 21:39:10 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span()
{
    _N = 0;
}

span::span(unsigned int N) : _N(N)
{
}

span::span(span const &src)
{
    *this = src;
}

span &span::operator=(span const &src)
{
    if (this != &src)
    {
        this->_N = src._N;
        for (size_t i = 0; i < src._N; i++)
        {
            this->v.push_back(src.v[i]);
        }
    }
    return (*this);
}

void    span::addNumber(int nb)
{
    if (this->v.size() < this->_N)
        v.push_back(nb);
    else
        throw outOflimit();

}

void    span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    while (first < last)
    {
        addNumber(*first);
        first++;
    }

}

const char *span::outOflimit::what() const throw()
{
    return "ERROR: Array Is Full!";
}

int span::longestSpan()
{
    if (v.size() <= 1)
        throw NoNumber();
    else
    {
        std::sort(v.begin(), v.end());
        return (*(v.end() - 1) - *v.begin());
    }
}

int span::shortestSpan()
{
    if (v.size() <= 1)
        throw NoNumber();
    else
    {
        std::sort(v.begin(), v.end());
        return (*(v.begin() + 1) - *(v.begin()));
    }
}

const char *span::NoNumber::what() const throw()
{
    return ("There are No numbers Stored, Or only one");
}

span::~span()
{
    v.clear();
}