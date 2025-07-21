/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:09:53 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 17:44:56 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define C_GREEN "\033[32m"
# define C_RESET "\033[0m"
# define C_YELLOW "\033[33m"
# define C_RED "\033[31m"
# define C_BLUE "\033[34m"
# define C_MAGENTA "\033[35m"
# define C_CYAN "\033[36m"

class Harl
{
	public:
		Harl( void );
		~Harl( void );

		void	complain( std::string level );

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

		void (Harl::*functions[4])(void);
		std::string levels[4];

		int		getLevelIndex( const std::string& level ) const;
};
#endif
