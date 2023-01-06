/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:31:14 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 15:48:45 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP

# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const &ref );
	~DiamondTrap( void );

	DiamondTrap	&operator=( DiamondTrap const &ref );

	void	whoAmI( void );
	void	attack( std::string const &target );

	private:

	std::string	_name;

};

#endif
