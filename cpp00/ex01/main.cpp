/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:58:16 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/21 14:24:01 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <limits>
#include <iostream>

void	search(const Phonebook &phonebook)
{
	int			index;
	std::string	input;

	phonebook.displayAllContacts();
	while (true)
	{
		std::cout << "Enter the index of the contact to search: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "Exiting Phonebook." << std::endl;
			return ;
		}
		std::istringstream	iss(input);
		if (!(iss >> index) || index < 1 || index > 8)
		{
			std::cout << "Invalid index. Please try again." << std::endl;
			continue ;
		}
		else
		{
			phonebook.displayFullContacts(index - 1);
			return ;
		}
	}
}

int	main( void )
{
	Phonebook	phonebook;
	std::string	command;

	std::cout << "Welcome to the Phonebook!" << std::endl;
	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
		{
			std::cout << "Exiting Phonebook." << std::endl;
			return (0);
		}
		if (command.empty())
		{
			std::cout << "No command entered. Please try again." << std::endl;
			continue ;
		}
		if (command == "ADD")
		{
			Contact 	contact;
			std::string	input;

			std::cout << "Enter first name: ";
			if (!std::getline(std::cin, input))
			{
				std::cout << "Exiting Phonebook." << std::endl;
				return (0);
			}
			contact.setFirstName(input);
			std::cout << "Enter last name: ";
			if (!std::getline(std::cin, input))
			{
				std::cout << "Exiting Phonebook." << std::endl;
				return (0);
			}
			contact.setLastName(input);
			std::cout << "Enter nickname: ";
			if (!std::getline(std::cin, input))
			{
				std::cout << "Exiting Phonebook." << std::endl;
				return (0);
			}
			contact.setNickname(input);
			std::cout << "Enter phone number: ";
			if (!std::getline(std::cin, input))
			{
				std::cout << "Exiting Phonebook." << std::endl;
				return (0);
			}
			contact.setPhoneNumber(input);
			std::cout << "Enter darkest secret: ";
			if (!std::getline(std::cin, input))
			{
				std::cout << "Exiting Phonebook." << std::endl;
				return (0);
			}
			contact.setDarkestSecret(input);
			phonebook.addContact(contact);
		}
		else if (command == "SEARCH")
		{
			search(phonebook);
		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting Phonebook." << std::endl;
			return (0);
		}
		else
		{
			std::cout << "Unknown command. Please try again." << std::endl;
		}
	}
	return (0);
}
