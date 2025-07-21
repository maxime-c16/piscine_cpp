/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:11:28 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 16:26:52 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr)
{
	std::cout << C_BLUE << _name << C_RESET << " has been created." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << C_BLUE << _name << C_RESET << " has been destroyed." << std::endl;
}

void HumanB::attack(void) const
{
	if (_weapon)
		std::cout << C_BLUE << _name << C_RESET << " attacks with " << C_MAGENTA << _weapon->getType() << C_RESET << std::endl;
	else
		std::cout << C_BLUE << _name << C_RESET << " has " << C_RED << "no weapon" << C_RESET << " to attack." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	std::cout << C_BLUE << _name << C_RESET << " has set weapon to: " << C_MAGENTA << _weapon->getType() << C_RESET << std::endl;
}
