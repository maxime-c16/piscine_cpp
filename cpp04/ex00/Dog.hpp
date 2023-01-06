/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:36:08 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 22:01:32 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( std::string type );
		Dog( Dog const &ref );
		~Dog( void );

		Dog	&operator=( Dog const &ref );

		virtual void	makeSound( void ) const;
};

#endif
