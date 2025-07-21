/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:21:12 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 13:12:45 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>

class Contact
{
	public:
		Contact( void );
		~Contact( void );

		void	setFirstName(const std::string &firstName);
		void	setLastName(const std::string &lastName);
		void	setNickname(const std::string &nickname);
		void	setPhoneNumber(const std::string &phoneNumber);
		void	setDarkestSecret(const std::string &darkestSecret);

		std::string	getFirstName( void ) const;
		std::string	getLastName( void ) const;
		std::string	getNickname( void ) const;
		std::string	getPhoneNumber( void ) const;
		std::string	getDarkestSecret( void ) const;

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif
