/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:34:15 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 22:24:18 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	Weapon
{
	public:

		std::string	&getType( void );
		void		setType( std::string type );

		Weapon( std::string type );
		~Weapon( void );

	private:
		std::string	_type;
};

#endif
