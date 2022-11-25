/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:39:18 by mcauchy           #+#    #+#             */
/*   Updated: 2022/11/25 18:43:25 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include "header.hpp"

class	Contact
{
	public:

		void	setFN(std::string);
		void	setLN(std::string);
		void	setNN(std::string);
		void	setPN(std::string);
		void	setDS(std::string);

		std::string	getFN(void) const;
		std::string	getLN(void) const;
		std::string	getNN(void) const;
		std::string	getPN(void) const;
		std::string	getDS(void) const;

		Contact(void);
		~Contact(void);

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif
