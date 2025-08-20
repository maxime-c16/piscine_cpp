/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:02:45 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/15 17:25:21 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( const WrongCat &ref );
		~WrongCat( void );
		
		WrongCat	&operator=( const WrongCat &ref );

		void	makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif
