/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:37:12 by mcauchy           #+#    #+#             */
/*   Updated: 2022/11/28 13:53:54 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

PhoneBook::PhoneBook(void) : _index(0), _is_full(0)
{
	std::cout << "Phonebook: Constructor called" << std::endl;
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
	j = (this->_is_full) ? 8 : this->_index;
	while (i < j)
	{
		this->displayContact(i);
		i++;
	}
}

void	PhoneBook::displayContact(int i)
{
	std::cout << "| " << std::setw(10) << "Index : "  << i + 1 << " | ";
	std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getFN()) << " | ";
	std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getLN()) << " | ";
	std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getNN()) << " |" ;
	std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getPN()) << " | ";
	std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getDS()) << " | " << std::endl;
}

std::string	PhoneBook::_truncate(std::string str) const
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
	std::string	str;

	std::cout << "First name: ";
	std::cin >> str;
	elem.setFN(str);
	std::cout << "Last name: ";
	std::cin >> str;
	elem.setLN(str);
	std::cout << "Nickname: ";
	std::cin >> str;
	elem.setNN(str);
	std::cout << "Phone number: ";
	std::cin >> str;
	elem.setPN(str);
	std::cout << "Darkest secret: ";
	std::cin >> str;
	elem.setDS(str);
	this->_contacts[this->_index] = elem;
	this->_nb_contacts = (this->_nb_contacts < 8) ? this->_nb_contacts + 1 : this->_nb_contacts;
	this->_index = (this->_index + 1) % 8;
}

int	PhoneBook::_nb_contacts = 0;
