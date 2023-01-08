/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:36:08 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/06 11:17:27 by mcauchy          ###   ########.fr       */
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
		Dog( std::string type );
		Dog( Dog const &ref );
		~Dog( void );

		Dog	&operator=( Dog const &ref );

		virtual void	makeSound( void ) const;

	private:
		Brain	*_brain;
};

#endif
