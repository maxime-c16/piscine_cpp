/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:47:33 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:21:40 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int	main( void )
{
	std::cout << "=== CORRECT Polymorphism Test ===" << std::endl;
	
	// Test 1: Correct polymorphism with virtual functions
	std::cout << "\n--- Test 1: Correct Virtual Function Calls ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << "\nCorrect polymorphism - Types and Sounds:" << std::endl;
	std::cout << meta->getType() << " says: ";
	meta->makeSound();
	std::cout << dog->getType() << " says: ";
	dog->makeSound();
	std::cout << cat->getType() << " says: ";
	cat->makeSound();
	
	delete meta;
	delete dog;
	delete cat;
	
	std::cout << "\n=== WRONG Polymorphism Test ===" << std::endl;
	
	// Test 2: Wrong polymorphism demonstration
	std::cout << "\n--- Test 2: Broken Virtual Function Calls ---" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << "\nWrong polymorphism - Types and Sounds:" << std::endl;
	std::cout << wrongMeta->getType() << " says: ";
	wrongMeta->makeSound();
	std::cout << wrongCat->getType() << " says: ";
	wrongCat->makeSound(); // This will call WrongAnimal::makeSound() instead of WrongCat::makeSound()
	
	delete wrongMeta;
	delete wrongCat;
	
	std::cout << "\n--- Test 3: Direct Object Comparison ---" << std::endl;
	std::cout << "Direct WrongCat object:" << std::endl;
	WrongCat directWrongCat;
	std::cout << directWrongCat.getType() << " says: ";
	directWrongCat.makeSound(); // This will work correctly
	
	std::cout << "\n--- Test 4: Side-by-Side Comparison ---" << std::endl;
	std::cout << "Correct Animal hierarchy:" << std::endl;
	const Animal* correctCat = new Cat();
	std::cout << "Through base pointer - " << correctCat->getType() << " says: ";
	correctCat->makeSound();
	delete correctCat;
	
	std::cout << "\nWrong Animal hierarchy:" << std::endl;
	const WrongAnimal* wrongCatPtr = new WrongCat();
	std::cout << "Through base pointer - " << wrongCatPtr->getType() << " says: ";
	wrongCatPtr->makeSound();
	delete wrongCatPtr;
	return 0;
}
