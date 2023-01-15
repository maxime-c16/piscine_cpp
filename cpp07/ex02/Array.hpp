/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:53:55 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/15 18:30:58 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array( void ) : _array(NULL), _size(0) {};
		
		Array( unsigned int n ) : _array(new T[n]), _size(n) {};

		Array( Array const & src ) : _array(new T[src._size]), _size(src._size) 
		{
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = src._array[i];
		};
		
		~Array( void ) { delete [] _array; };


		class OutOfBoundsException : public std::exception
		{
			const char * what() const throw()
			{
				return "Out of bounds";
			}
		};

		Array	& operator=( Array const & rhs ) 
		{
			if (this != &rhs)
			{
				delete [] _array;
				_array = new T[rhs._size];
				_size = rhs._size;
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return *this;
		}
		
		T		& operator[]( unsigned int n )
		{
			if (n >= _size)
				throw OutOfBoundsException();
			return _array[n];
		}
		
		unsigned int	size( void ) const { return _size; };

	private:
		T				*_array;
		unsigned int	_size;
};

#endif
