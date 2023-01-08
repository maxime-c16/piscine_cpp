/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:18:06 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/06 11:18:38 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP

# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	public:
		AAnimal( void );
		AAnimal( AAnimal const &ref );
		virtual ~AAnimal( void );

		AAnimal&	operator=( AAnimal const &ref );

		virtual void		makeSound( void ) const = 0;
		virtual std::string	getType( void ) const;

	protected:
		std::string	_type;
};

#endif
