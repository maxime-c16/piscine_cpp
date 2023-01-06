/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:58:45 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 15:52:29 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:

		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &src );
		~ScavTrap( void );

		ScavTrap	&operator=( ScavTrap const &ref );

		void	guardGate( void );
		void	attack( std::string const &target );

};

#endif
