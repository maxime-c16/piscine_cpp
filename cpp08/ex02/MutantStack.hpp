/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:35:15 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/16 09:47:41 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP

# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void ) {}
		MutantStack( MutantStack const & src )
		{
			*this = src;
		}
		virtual ~MutantStack( void ) {}

		typedef typename std::stack<T>::container_type::iterator it;

		it begin( void )
		{
			return (this->c.begin());
		}
		it end( void )
		{
			return (this->c.end());
		}

		it	&operator=( MutantStack const & rhs )
		{
			this->c = rhs.c;
			return (*this);
		}
};

#endif
