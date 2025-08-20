/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:38:47 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/15 17:25:17 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( const Dog &ref );
		~Dog( void );

		Dog	&operator=( const Dog &ref );

		void	makeSound( void ) const;
		std::string	getType( void ) const;
		Brain*	getBrain( void ) const;

	private:
		Brain*		_brain;
};

#endif
