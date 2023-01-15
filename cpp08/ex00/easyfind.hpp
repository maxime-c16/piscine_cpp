/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:20:42 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/15 20:23:28 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

# define EASYFIND_HPP

# include <algorithm>

template <typename T>
int	easyfind( T & container, int n)
{
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
		if (*it == n)
			return (*it);
	throw std::exception();
}

#endif