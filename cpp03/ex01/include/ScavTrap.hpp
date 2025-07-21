/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:33:57 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/21 12:44:24 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( const std::string &name );
		ScavTrap( const ScavTrap &other );
		~ScavTrap( void );

		ScavTrap	&operator=( const ScavTrap &other );

		void	guardGate( void );
	};

#endif
