/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:04:26 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 16:26:53 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << C_GREEN << _name << C_RESET << " has been created with weapon: " << C_MAGENTA << _weapon.getType() << C_RESET << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << C_GREEN << _name << C_RESET << " has been destroyed." << std::endl;
}

void HumanA::attack(void) const
{
	std::cout << C_GREEN << _name << C_RESET << " attacks with " << C_MAGENTA << _weapon.getType() << C_RESET << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
	std::cout << C_GREEN << _name << C_RESET << " has changed weapon to: " << C_MAGENTA << _weapon.getType() << C_RESET << std::endl;
}
