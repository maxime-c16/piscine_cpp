/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:37:12 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 10:57:15 by mcauchy          ###   ########.fr       */
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
	if (this->_nb_contacts < i + 1)
	{
		std::cout << "No contact at index " << i + 1 << std::endl;
		return ;
	}
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

void	PhoneBook::setContact(Contact elem, int index)
{
	this->_contacts[index] = elem;
}

void	PhoneBook::addContact(Contact elem)
{
	this->setContact(elem, this->_index);
	this->_nb_contacts = (this->_nb_contacts < 8) ? this->_nb_contacts + 1 : this->_nb_contacts;
	if (!this->_is_full)
		this->_is_full = (this->_index == 7) ? 1 : 0;
	this->_index = (this->_index + 1) % 8;
}

int	PhoneBook::_nb_contacts = 0;
