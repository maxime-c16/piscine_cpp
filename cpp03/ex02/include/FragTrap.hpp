/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:04:56 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/12 16:42:42 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap, public ScavTrap
{
	public:
		FragTrap( void );
		FragTrap( const std::string &name );
		FragTrap( const FragTrap &other );
		~FragTrap( void );

		FragTrap	&operator=( const FragTrap &other );

		void	highFivesGuys( void );

	private:
		unsigned int _specialAttackDamage;
		unsigned int _specialEnergyPoints;
};

#endif
