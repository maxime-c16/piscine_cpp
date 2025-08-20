/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:37:06 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/15 17:24:49 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( const Cat &ref );
		~Cat( void );

		Cat	&operator=( const Cat &ref );

		void	makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif
