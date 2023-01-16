/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:35:24 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/15 22:46:15 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	public:
		Span( size_t N );
		Span( Span const & src );
		~Span( void );

		Span&	operator=( Span const & rhs );

		class SpanFullException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Span is full");
				}
		};

		class LessThanTwoException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Span contains less than two elements");
				}
		};

		void	addNumber( int n );
		int		shortestSpan( void );
		int		longestSpan( void );

	private:
		Span( void );

		std::vector<int>	_vec;
		size_t				_N;
};

#endif
