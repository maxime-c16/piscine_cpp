/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:37:06 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:37:06 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( const Cat &ref );
		~Cat( void );

		Cat	&operator=( const Cat &ref );

		void	makeSound( void ) const;
		std::string	getType( void ) const;
		Brain*	getBrain( void ) const;

	private:
		std::string _type;
		Brain*		_brain;
};

#endif
