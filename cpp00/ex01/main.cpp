/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:32:35 by mcauchy           #+#    #+#             */
/*   Updated: 2022/11/28 13:59:13 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	int			index;

	std::cout << "Welcome to the PhoneBook" << std::endl;
	std::cout << "Please enter a command (ADD, SEARCH, EXIT)" << std::endl;
	while (1)
	{
		std::string	command;
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
		{
			phonebook.displayAllContacts();
			std::cout << "Enter the index of the contact you want to display: ";
			while (!(std::cin >> index) || index > 8 || index < 1)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid index, please enter a valid index: ";
			}
			phonebook.displayContact(index - 1);
		}
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
