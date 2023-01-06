/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:21:58 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 12:22:54 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:

		ClapTrap( std::string name );
		~ClapTrap( void );

		void	attack( std::string const &target );
		void	takeDamage( unsigned int amout );
		void	beRepaired(unsigned int amout );

		std::string		getName( void ) const;
		unsigned int	getHitPoint( void ) const;
		unsigned int	getEnergyPoint( void ) const;
		unsigned int	getAttackDamage( void ) const;

	protected:

		ClapTrap( void );
		ClapTrap( ClapTrap const &src );

		ClapTrap&	operator=( ClapTrap const &ref );

		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;
};

#endif
