/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:58:43 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/27 12:37:16 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

# define HARL_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>
# include <map>

class Harl
{
	public:

		void	complain( std::string level );
		std::map<std::string, void (Harl::*)()>	function_map;

		Harl( void );
		~Harl( void );

	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
