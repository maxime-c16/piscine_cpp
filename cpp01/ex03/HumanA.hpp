/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:58:47 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 22:13:25 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:

		std::string	&getName( void );
		Weapon		&getArm( void );
		void		attack( void ) const;

		HumanA( std::string name, Weapon &ref );
		~HumanA( void );

	private:

		Weapon		&_arm;
		std::string	_name;
};

#endif
