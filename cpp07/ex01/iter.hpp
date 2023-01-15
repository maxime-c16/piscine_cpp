/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:00:42 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/15 13:17:06 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# define ITER_HPP

# include <iostream>

template <typename T, typename U>
void	iter(T *tab, int len, U func)
{
	for (int i = 0; i < len; i++)
		func(tab[i]);
}

template<typename T>
void increment(T& x)
{
	x++;
}

template <typename T>
void	print(T x)
{
	std::cout << x << " ";
}

template <>
void	print(bool x)
{
	std::cout << (x ? "true" : "false") << " ";
}

#endif
