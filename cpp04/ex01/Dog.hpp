/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:36:08 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/06 10:58:00 by mcauchy          ###   ########.fr       */
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
		Dog( std::string type );
		Dog( Dog const &ref );
		~Dog( void );

		Dog	&operator=( Dog const &ref );

		virtual void	makeSound( void ) const;

	private:
		Brain	*_brain;
};

#endif
