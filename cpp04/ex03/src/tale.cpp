/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tale.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:00:00 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/24 17:29:44 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

#define BOLD    "\033[1m"
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"

static void printStoryline(const std::string& message) {
	std::cout << BLUE << "📖 " << message << RESET << std::endl;
}

int main()
{
	std::cout << BOLD << CYAN << "\n=== MATERIA CHRONICLES: A BRIEF TALE ===" << RESET << std::endl;
	std::cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;
	
	printStoryline("In the ancient academy of magic, Master Eldric runs the Materia Laboratory...");
	
	MateriaSource* laboratory = new MateriaSource();
	printStoryline("Master Eldric establishes his research laboratory.");
	
	printStoryline("After years of research, he discovers the secrets of Ice and Cure materias!");
	AMateria* iceResearch = new Ice();
	AMateria* cureResearch = new Cure();
	laboratory->learnMateria(iceResearch);
	laboratory->learnMateria(cureResearch);
	delete iceResearch;
	delete cureResearch;
	
	printStoryline("Two brave adventurers arrive seeking magical aid...");
	Character* alice = new Character("Alice");
	Character* bob = new Character("Bob");
	
	printStoryline("Alice, the battle mage, requests offensive magic:");
	AMateria* aliceIce1 = laboratory->createMateria("ice");
	AMateria* aliceIce2 = laboratory->createMateria("ice");
	alice->equip(aliceIce1);
	alice->equip(aliceIce2);
	
	printStoryline("Bob, the cleric, seeks healing powers:");
	AMateria* bobCure1 = laboratory->createMateria("cure");
	AMateria* bobCure2 = laboratory->createMateria("cure");
	bob->equip(bobCure1);
	bob->equip(bobCure2);
	
	printStoryline("The duo ventures into the dangerous dungeon...");
	printStoryline("Suddenly, a fearsome monster appears blocking their path!");
	Character* monster = new Character("Monster");
	
	printStoryline("Alice attacks the monster with ice magic:");
	alice->use(0, *monster);
	
	printStoryline("The battle is fierce! Alice gets wounded and needs healing:");
	bob->use(0, *alice);
	
	printStoryline("Alice retaliates with another ice spell at the monster:");
	alice->use(1, *monster);
	
	printStoryline("Bob provides additional healing support:");
	bob->use(1, *alice);
	
	printStoryline("The monster is defeated! Victory is theirs!");
	delete monster;
	
	printStoryline("News of their success reaches the academy...");
	printStoryline("A new adventurer, Charlie, wants the same equipment as Alice:");
	Character charlie(*alice);
	printStoryline("Charlie receives an exact copy of Alice's equipment!");
	
	printStoryline("Charlie tests his new ice magic:");
	charlie.use(0, *bob);
	
	printStoryline("Alice decides to reorganize her equipment...");
	alice->unequip(0);
	delete aliceIce1;
	printStoryline("Alice stores away one of her ice materias.");
	
	printStoryline("Bob attempts to use a spell from an empty slot:");
	bob->use(3, *alice);
	
	printStoryline("The laboratory refuses to create unknown magic:");
	AMateria* unknownSpell = laboratory->createMateria("lightning");
	if (!unknownSpell) {
		printStoryline("Master Eldric shakes his head - such magic is beyond current knowledge.");
	}
	
	printStoryline("After their successful adventure, the heroes return to town...");
	printStoryline("Their legend lives on, inspiring future generations of mages!");
	
	delete alice;
	delete bob;
	delete laboratory;
	
	std::cout << BOLD << GREEN << "=== END OF TALE ===" << RESET << std::endl;
	std::cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;

	return 0;
}
