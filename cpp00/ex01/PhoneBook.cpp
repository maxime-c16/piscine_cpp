/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:37:12 by mcauchy           #+#    #+#             */
/*   Updated: 2022/11/25 21:03:28 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Phonebook: Constructor called" << std::endl;
	this->_index = 0;
	this->_is_full = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook: Destructor called" << std::endl;
}

void	PhoneBook::displayAllContacts(void)
{
	int	i;
	int	j;

	i = 0;
	if (this->_is_full == 1)
		j = 7;
	else
		j = this->_index - 1;
	while (i <= j)
	{
		this->displayContact(i);
		i++;
	}
}

void	PhoneBook::displayContact(int i)
{
	std::cout << "| " << "Index : " << std::setw(10) << i << " | ";
	std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getFN()) << " | ";
	std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getLN()) << " | ";
	std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getNN()) << " |" ;
	std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getPN()) << " | ";
	std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getDS()) << " | " << std::endl;
}

std::string	PhoneBook::_truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void	PhoneBook::searchContact(void)
{
	int	index;

	index = 0;
	while (std::cin.good() == 1)
	{
		std::cout << "Enter index to search: ";
		std::cin >> index;
		if (index <= 8 && index > 0 && (index <= this->_index || this->_is_full == 1))
		{
			this->displayContact(index);
			break;
		}
		else
		{
			std::cout << "Invalid index" << std::endl;
			break;
		}
	}
}

void	PhoneBook::addContact(void)
{
	Contact		elem;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "First name: ";
	std::cin >> first_name;
	elem.setFN(first_name);
	std::cout << "Last name: ";
	std::cin >> last_name;
	elem.setLN(last_name);
	std::cout << "Nickname: ";
	std::cin >> nickname;
	elem.setNN(nickname);
	std::cout << "Phone number: ";
	std::cin >> phone_number;
	elem.setPN(phone_number);
	std::cout << "Darkest secret: ";
	std::cin >> darkest_secret;
	elem.setDS(darkest_secret);
	if (this->_index < 8)
		this->_contacts[this->_index] = elem;
	else if (this->_is_full > 0 || this->_index > 2)
	{
		this->_is_full = 1;
		this->_index = 0;
		this->_contacts[this->_index] = elem;
	}
	this->_index++;
}
