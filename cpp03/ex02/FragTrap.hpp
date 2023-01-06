/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:55:35 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 12:19:26 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:

		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap const &ref );
		~FragTrap( void );

		FragTrap	&operator=( FragTrap const &ref );

		void	highFivesGuys( void );

};

#endif
