/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:54:43 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/06 10:56:56 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain( void );
		Brain( Brain const & src );
		~Brain( void );

		Brain	&operator=( Brain const &ref );

	private:
		std::string		_ideas[100];
};

#endif
