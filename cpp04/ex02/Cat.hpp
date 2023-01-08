/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:43:33 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/06 11:17:27 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat( void );
		Cat( std::string type );
		Cat( Cat const &ref );
		~Cat( void );

		Cat	&operator=( Cat const &ref );

		virtual void	makeSound( void ) const;

	private:
		Brain	*_brain;
};

#endif
