/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:10:52 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 16:12:23 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "HumanA.hpp"

class HumanB
{
	public:
		HumanB( std::string name );
		~HumanB( void );

		void attack( void ) const;
		void setWeapon( Weapon &weapon );

	private:
		std::string	_name;
		Weapon		*_weapon;

};

#endif
