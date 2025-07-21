/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:22:53 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 13:08:20 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook( void );
		~Phonebook( void );

		void	addContact( const Contact &contact );
		void	searchContact( void ) const;
		void	displayContacts( int index ) const;
		void	displayAllContacts( void ) const;
		void	setContact( int index, const Contact &contact );
		int		getCurrentIndex( void ) const;

	private:
		static int	_nbContacts;
		Contact		_contacts[8];
		int			_currentIndex;
		bool		_isFull;
		std::string	_truncate( const std::string &str) const;
};

#endif
