/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:01:45 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 17:29:45 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	Zombie
{
	public:

		void	announce( void ) const;
		Zombie	*newZombie( std::string name );
		void	randomChump( std::string name );

		Zombie( std::string name );
		~Zombie( void );

	private:

		std::string	_name;
};

#endif
