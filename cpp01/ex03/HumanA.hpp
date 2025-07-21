/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:02:53 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 16:04:06 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );

		void attack( void ) const;
		void setWeapon( Weapon &weapon );

	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
