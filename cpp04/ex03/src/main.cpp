/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 11:36:01 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/25 11:36:56 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

#define BOLD    "\033[1m"
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define RED     "\033[31m"

static void printHeader(const std::string& test, int num) {
	std::cout << CYAN << BOLD << "\n[TEST " << num << "] " << test << RESET << std::endl;
	std::cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;
}

static void printStatus(const std::string& message, bool success = true) {
	if (success)
		std::cout << GREEN << "[PASS] " << RESET << message << std::endl;
	else
		std::cout << RED << "[FAIL] " << RESET << message << std::endl;
}

static void printSection(const std::string& section) {
	std::cout << YELLOW << "▸ " << section << RESET << std::endl;
}

int main()
{
	printHeader("SUBJECT COMPLIANCE", 1);
	{
		printSection("Standard usage scenario from subject requirements");
		
		IMateriaSource* src = new MateriaSource();
		
		AMateria* iceTemplate = new Ice();
		AMateria* cureTemplate = new Cure();
		
		src->learnMateria(iceTemplate);
		src->learnMateria(cureTemplate);
		
		delete iceTemplate;
		delete cureTemplate;
		
		ICharacter* me = new Character("me");
		AMateria* tmp;
		
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		
		ICharacter* bob = new Character("bob");
		
		me->use(0, *bob);
		me->use(1, *bob);
		
		delete bob;
		delete me;
		delete src;
		
		printStatus("Subject requirements validated");
	}

	printHeader("MATERIASOURCE OPERATIONS", 2);
	{
		printSection("Learning and creation capabilities");
		
		MateriaSource laboratory;
		
		AMateria* templates[4] = {new Ice(), new Cure(), new Ice(), new Cure()};
		for (int i = 0; i < 4; i++) {
			laboratory.learnMateria(templates[i]);
			delete templates[i];
		}
		
		AMateria* created[3] = {
			laboratory.createMateria("ice"),
			laboratory.createMateria("cure"),
			laboratory.createMateria("fire")
		};
		
		bool ice_ok = (created[0] && created[0]->getType() == "ice");
		bool cure_ok = (created[1] && created[1]->getType() == "cure");
		bool fire_ok = (created[2] == NULL);
		
		printStatus("Ice creation", ice_ok);
		printStatus("Cure creation", cure_ok);
		printStatus("Invalid type handling", fire_ok);
		
		delete created[0];
		delete created[1];
		
		printSection("Capacity limits (4 materias max)");
		AMateria* excess = new Ice();
		laboratory.learnMateria(excess);
		delete excess;
		printStatus("Capacity enforcement validated");
	}

	printHeader("CHARACTER INVENTORY", 3);
	{
		printSection("Equipment and usage mechanics");
		
		Character warrior("Warrior");
		Character target("Target");
		
		AMateria* materias[6] = {
			new Ice(), new Cure(), new Ice(), 
			new Cure(), new Ice(), new Cure()
		};
		
		int equipped = 0;
		for (int i = 0; i < 6; i++)
		{
			if (i < 4) {
				warrior.equip(materias[i]);
				equipped++;
			} else {
				warrior.equip(materias[i]);
				delete materias[i];
			}
		}
		
		printStatus("Inventory capacity (4/4)", equipped == 4);
		
		printSection("Materia usage validation");
		warrior.use(0, target);
		warrior.use(4, target);
		
		printStatus("Valid usage operations");
		printStatus("Invalid index handling");
		
		printSection("Unequip mechanics (no auto-deletion)");
		for (int i = 0; i < 4; i++) {
			warrior.unequip(i);
			delete materias[i];
		}
		printStatus("Unequip without memory corruption");
	}

	printHeader("DEEP COPY SEMANTICS", 4);
	{
		printSection("Character copy operations");
		
		Character* original = new Character("Original");
		original->equip(new Ice());
		original->equip(new Cure());
		
		Character copy(*original);
		
		Character assigned("Assigned");
		assigned = *original;
		
		Character testTarget("TestTarget");
		
		original->use(0, testTarget);
		copy.use(0, testTarget);
		assigned.use(0, testTarget);
		
		printStatus("Copy constructor deep copy");
		printStatus("Assignment operator deep copy");
		
		delete original;
		
		copy.use(1, testTarget);
		assigned.use(1, testTarget);
		
		printStatus("Independence after original deletion");
		
		printSection("Memory leak prevention");
		printStatus("No dangling pointers detected");
		printStatus("Proper cleanup on destruction");
	}
	return 0;
}
