/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:38:47 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:48:21 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
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
		std::string _type;
		Brain*		_brain;
};

#endif
