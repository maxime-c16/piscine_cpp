/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:35:16 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/15 22:47:05 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( size_t N ) : _N(N)
{
}

Span::Span( Span const & src ) : _N(src._N)
{
	*this = src;
}

Span::~Span( void )
{
}

Span&	Span::operator=( Span const & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_vec = rhs._vec;
	this->_N = rhs._N;
	return (*this);
}

void	Span::addNumber( int n )
{
	if (this->_vec.size() == this->_N)
		throw Span::SpanFullException();
	this->_vec.push_back(n);
}

int		Span::shortestSpan( void )
{
	if (this->_vec.size() < 2)
		throw Span::LessThanTwoException();
	std::vector<int>	tmp(this->_vec);
	std::sort(tmp.begin(), tmp.end());
	int					min = tmp[1] - tmp[0];
	for (size_t i = 2; i < tmp.size(); i++)
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	return (min);
}

int		Span::longestSpan( void )
{
	if (this->_vec.size() < 2)
		throw Span::LessThanTwoException();
	std::vector<int>	tmp(this->_vec);
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}
