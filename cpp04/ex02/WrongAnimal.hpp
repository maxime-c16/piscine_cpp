/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:49:11 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 22:05:09 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const &ref );
		virtual ~WrongAnimal( void );

		WrongAnimal	&operator=( WrongAnimal const &ref );

		virtual void	makeSound( void ) const;

		std::string	getType( void ) const;

	protected:
		std::string	_type;
};

#endif
