/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:47:33 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 12:08:12 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/Brain.hpp"

int	main( void )
{
	std::cout << "=== Ex02: Abstract Animal Test ===" << std::endl;
	
	std::cout << "\n--- Test 1: Abstract Class Demonstration ---" << std::endl;
	std::cout << "Note: AAnimal is abstract - cannot instantiate directly!" << std::endl;
	std::cout << "✓ AAnimal is properly abstract (pure virtual makeSound)" << std::endl;
	
	std::cout << "\n--- Test 2: Creating AAnimal Array ---" << std::endl;
	const int arraySize = 6;
	AAnimal* animals[arraySize];
	
	for (int i = 0; i < arraySize / 2; i++)
	{
		animals[i] = new Dog();
	}
	
	for (int i = arraySize / 2; i < arraySize; i++)
	{
		animals[i] = new Cat();
	}
	
	std::cout << "\n--- Test 3: Polymorphism with Abstract Base ---" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << "AAnimal[" << i << "] type: " << animals[i]->getType() << " - ";
		animals[i]->makeSound();
	}
	
	std::cout << "\n--- Test 4: Deep Copy Test ---" << std::endl;
	Dog originalDog;
	originalDog.getBrain()->setIdea(0, "I'm a concrete Dog!");
	originalDog.getBrain()->setIdea(1, "Abstract base cannot exist");
	
	std::cout << "Original dog ideas:" << std::endl;
	std::cout << "  Idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "  Idea 1: " << originalDog.getBrain()->getIdea(1) << std::endl;
	
	Dog copiedDog(originalDog);
	std::cout << "\nCopied dog ideas:" << std::endl;
	std::cout << "  Idea 0: " << copiedDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "  Idea 1: " << copiedDog.getBrain()->getIdea(1) << std::endl;
	
	originalDog.getBrain()->setIdea(0, "Modified original!");
	std::cout << "\nAfter modifying original:" << std::endl;
	std::cout << "  Original idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "  Copied idea 0: " << copiedDog.getBrain()->getIdea(0) << std::endl;
	
	if (originalDog.getBrain()->getIdea(0) != copiedDog.getBrain()->getIdea(0))
		std::cout << "✓ Deep copy successful with abstract base!" << std::endl;
	else
		std::cout << "✗ Shallow copy detected!" << std::endl;
	
	std::cout << "\n--- Test 5: Abstract Base Polymorphism ---" << std::endl;
	AAnimal* testAnimal = new Cat();
	std::cout << "Abstract base pointer to Cat: " << testAnimal->getType() << std::endl;
	std::cout << "Calling makeSound through abstract base: ";
	testAnimal->makeSound();
	
	Cat* testCat = dynamic_cast<Cat*>(testAnimal);
	if (testCat)
	{
		testCat->getBrain()->setIdea(0, "I'm abstract but concrete!");
		std::cout << "Cat's idea: " << testCat->getBrain()->getIdea(0) << std::endl;
	}
	delete testAnimal;
	std::cout << "\n--- Test 6: Cleanup (Destructor Order Test) ---" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << "Deleting animal[" << i << "]:" << std::endl;
		delete animals[i];
	}
	
	std::cout << "\n=== Abstract Animal Test Complete ===" << std::endl;
	std::cout << "Key lesson: Abstract classes enforce implementation in derived classes!" << std::endl;
	return 0;
}
