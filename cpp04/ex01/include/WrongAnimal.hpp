/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:01:05 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:13:54 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "Animal.hpp"

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &ref );
		virtual ~WrongAnimal( void );

		WrongAnimal	&operator=( const WrongAnimal &ref );

		void			makeSound( void ) const;
		std::string		getType( void ) const;

	protected:
		std::string	_type;
};

#endif
