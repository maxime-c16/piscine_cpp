/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:32:35 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/29 10:48:37 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	int			index;
	Contact		contact;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Welcome to the PhoneBook" << std::endl;
	std::cout << "Please enter a command (ADD, SEARCH, EXIT)" << std::endl;
	while (1)
	{
		std::string	command;
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD")
		{
			std::cout << "Enter first name: ";
			std::cin >> first_name;
			contact.setFN(first_name);
			std::cout << "Enter last name: ";
			std::cin >> last_name;
			contact.setLN(last_name);
			std::cout << "Enter nickname: ";
			std::cin >> nickname;
			contact.setNN(nickname);
			std::cout << "Enter phone number: ";
			std::cin >> phone_number;
			contact.setPN(phone_number);
			std::cout << "Enter darkest secret: ";
			std::cin >> darkest_secret;
			contact.setDS(darkest_secret);
			phonebook.addContact(contact);
		}
		else if (command == "SEARCH")
		{
			phonebook.displayAllContacts();
			std::cout << "Enter the index of the contact you want to display: ";
			while (!(std::cin >> index) || index > 8 || index < 1)
			{
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
				std::cout << "Invalid index, please enter a valid index: ";
			}
			phonebook.displayContact(index - 1);
		}
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
