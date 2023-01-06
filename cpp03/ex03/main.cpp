/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:48:38 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 16:07:05 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	std::cout << "--- Creating DiamondTrap ---" << std::endl;

	DiamondTrap diamondTrap("Maxime");

	std::cout << std::endl << "--- DiamondTrap stats ---" << std::endl;

	std::cout << "DiamondTrap: " << diamondTrap.getName() << " has " << diamondTrap.getHitPoint() << " hit points" << std::endl;
	std::cout << "DiamondTrap: " << diamondTrap.getName() << " has " << diamondTrap.getEnergyPoint() << " energy points" << std::endl;
	std::cout << "DiamondTrap: " << diamondTrap.getName() << " has " << diamondTrap.getAttackDamage() << " attack damage" << std::endl;

	std::cout << std::endl << "--- Attacking ---" << std::endl;
	diamondTrap.attack("Enemy");

	std::cout << std::endl << "--- Taking damage ---" << std::endl;
	diamondTrap.takeDamage(10);
	std::cout << "DiamondTrap: " << diamondTrap.getName() << " has " << diamondTrap.getHitPoint() << " hit points" << std::endl;

	std::cout << std::endl << "--- Repairing ---" << std::endl;
	diamondTrap.beRepaired(5);
	std::cout << "DiamondTrap: " << diamondTrap.getName() << " has " << diamondTrap.getHitPoint() << " hit points" << std::endl;

	std::cout << std::endl << "--- Special abilities ---" << std::endl;
	diamondTrap.whoAmI();
	std::cout << std::endl;
	diamondTrap.guardGate();
	std::cout << std::endl;
	diamondTrap.highFivesGuys();
	std::cout << std::endl;

	std::cout << "--- Testing copy constructor ---" << std::endl;
	DiamondTrap diamondTrap2(diamondTrap);
	std::cout << std::endl << "--- Who is diamondTrap2? ---" << std::endl;
	diamondTrap2.whoAmI();
	std::cout << std::endl;

	std::cout << "--- Destructors ---" << std::endl;

	return (0);
}
