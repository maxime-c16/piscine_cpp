/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:23:53 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:26:24 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
	public:
		Brain( void );
		Brain( const Brain &ref );
		~Brain( void );

		Brain	&operator=( const Brain &ref );

		std::string	getIdea( int index ) const;
		void		setIdea( int index, const std::string &idea );

	private:
		std::string	_ideas[100];
};

#endif
