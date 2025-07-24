/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:01:05 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:13:54 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGAANIMAL_HPP
# define WRONGAANIMAL_HPP

# include "AAnimal.hpp"

class WrongAAnimal
{
	public:
		WrongAAnimal( void );
		WrongAAnimal( const WrongAAnimal &ref );
		virtual ~WrongAAnimal( void );

		WrongAAnimal	&operator=( const WrongAAnimal &ref );

		void			makeSound( void ) const;
		std::string		getType( void ) const;

	protected:
		std::string	_type;
};

#endif
