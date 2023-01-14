/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:07:30 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/14 19:16:38 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP

# define DATA_HPP

# include <iostream>
# include <string>
# include <stdint.h>

class Data
{
	public:
		Data( void );
		Data( bool alive );
		Data( Data const & src) ;
		~Data( void );

		Data	&operator=( Data const &ref );

		void		setAlive( bool alive );
		bool		getAlive( void ) const;

	private:
		bool		_alive;
};

#endif