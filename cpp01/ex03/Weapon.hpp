/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:00:30 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 16:13:56 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

# define C_GREEN "\033[32m"
# define C_RESET "\033[0m"
# define C_YELLOW "\033[33m"
# define C_RED "\033[31m"
# define C_BLUE "\033[34m"
# define C_MAGENTA "\033[35m"
# define C_CYAN "\033[36m"

class Weapon
{
	public:
		Weapon( std::string type );
		~Weapon( void );

		const std::string &getType( void ) const;
		void setType( const std::string &type );

	private:
		std::string _type;
};

#endif
