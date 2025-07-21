/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:32:03 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/21 14:19:38 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <sstream>

Phonebook::Phonebook( void ) : _currentIndex(0), _isFull(false)
{
}

Phonebook::~Phonebook( void )
{
}

std::string Phonebook::_truncate( const std::string &str ) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Phonebook::displayContacts( int index ) const
{
	if (index < 0 || index >= _nbContacts)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	std::cout << "| " << std::setw(10) << "Index : "  << index + 1 << " | ";
	std::cout << std::setw(10) << _truncate(_contacts[index].getFirstName()) << " | ";
	std::cout << std::setw(10) << _truncate(_contacts[index].getLastName()) << " | ";
	std::cout << std::setw(10) << _truncate(_contacts[index].getNickname()) << " |" << std::endl;
}

void	Phonebook::displayAllContacts( void ) const
{
	for (int i = 0; i < _nbContacts; i++)
	{
		displayContacts(i);
	}
	if (_nbContacts == 0)
		std::cout << "No contacts available." << std::endl;
}

void	Phonebook::displayFullContacts( int index ) const
{
	if (index < 0 || index >= _nbContacts)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	std::cout << "| " << std::setw(10) << "Index : "  << index + 1 << " | ";
	std::cout << std::setw(10) << _contacts[index].getFirstName() << " | ";
	std::cout << std::setw(10) << _contacts[index].getLastName() << " | ";
	std::cout << std::setw(10) << _contacts[index].getNickname() << " | ";
	std::cout << std::setw(10) << _contacts[index].getPhoneNumber() << " | ";
	std::cout << std::setw(10) << _contacts[index].getDarkestSecret() << " |" << std::endl;
	std::cout << "Full contact details:" << std::endl;
	std::cout << "First Name: " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << std::endl;
}

void	Phonebook::setContact( int index, const Contact &contact )
{
	_contacts[index] = contact;
}

void	Phonebook::addContact( const Contact &contact )
{
	setContact(_currentIndex, contact);
	_nbContacts = (_nbContacts < 8) ? _nbContacts + 1 : _nbContacts;
	if (!_isFull)
		_isFull = (_currentIndex == 7);
	_currentIndex = (_currentIndex + 1) % 8;
}

void	Phonebook::searchContact( void ) const
{
	int			index;
	std::string input;
	std::stringstream ss;

	index = 0;
	while (std::cin.good() == 1)
	{
		std::cout << "Enter contact index (1-8): ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "Exiting Phonebook." << std::endl;
			return ;
		}
		if (input.empty())
			break ;
		ss.clear();
		ss.str(input);
		if (!(ss >> index) || !ss.eof())
		{
			std::cout << "Invalid input. Please enter a number." << std::endl;
			continue ;
		}
		index = index - 1;
		if (index < 0 || index >= _nbContacts)
		{
			std::cout << "Invalid index. Please try again." << std::endl;
			continue ;
		}
		else
		{
			displayFullContacts(index);
			break ;
		}
	}
}

int Phonebook::getCurrentIndex( void ) const
{
	return _currentIndex;
}

int Phonebook::_nbContacts = 0;
