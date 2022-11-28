/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:35:03 by mcauchy           #+#    #+#             */
/*   Updated: 2022/11/28 13:49:27 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	public:

		void	addContact(void);
		void	delContact(int index);
		void	searchContact(void);
		void	displayContact(int index);
		void	displayAllContacts(void);

		PhoneBook(void);
		~PhoneBook(void);

	private:

		static int	_nb_contacts;
		Contact		_contacts[8];
		int			_index;
		int			_is_full;
		std::string	_truncate(std::string str) const;
};

#endif
