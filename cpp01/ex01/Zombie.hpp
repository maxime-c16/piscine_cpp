/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:48:41 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 14:22:47 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

# define C_GREEN "\033[32m"
# define C_RESET "\033[0m"
# define C_YELLOW "\033[33m"
# define C_RED "\033[31m"
# define C_BLUE "\033[34m"
# define C_MAGENTA "\033[35m"
# define C_CYAN "\033[36m"

class Zombie
{
	public:
		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );

		void announce( void ) const;
		void setName(const std::string &name);

	private:
		std::string _name;

};

Zombie	*zombieHorde( int N, std::string name );

#endif
