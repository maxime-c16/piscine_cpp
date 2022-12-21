/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:52:40 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 22:21:50 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:

		std::string	&getName( void );
		void		setWeapon( Weapon ptr );
		void		attack( void ) const;

		HumanB( std::string name, Weapon *ptr );
		HumanB( std::string name );
		~HumanB( void );

	private:

		Weapon		*_arm;
		std::string	_name;
};

#endif
