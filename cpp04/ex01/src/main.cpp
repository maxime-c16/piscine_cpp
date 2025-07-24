/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:47:33 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:39:55 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/Brain.hpp"

int	main( void )
{
	std::cout << "=== Ex01: Brain Implementation Test ===" << std::endl;
	
	std::cout << "\n--- Test 1: Creating Animal Array ---" << std::endl;
	const int arraySize = 6;
	Animal* animals[arraySize];
	
	for (int i = 0; i < arraySize / 2; i++)
	{
		animals[i] = new Dog();
	}
	
	for (int i = arraySize / 2; i < arraySize; i++)
	{
		animals[i] = new Cat();
	}
	
	std::cout << "\n--- Test 2: Testing Polymorphism ---" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << "Animal[" << i << "] type: " << animals[i]->getType() << " - ";
		animals[i]->makeSound();
	}
	
	std::cout << "\n--- Test 3: Deep Copy Test ---" << std::endl;
	Dog originalDog;
	originalDog.getBrain()->setIdea(0, "I love bones!");
	originalDog.getBrain()->setIdea(1, "Squirrels are suspicious");
	
	std::cout << "Original dog ideas:" << std::endl;
	std::cout << "  Idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "  Idea 1: " << originalDog.getBrain()->getIdea(1) << std::endl;
	
	Dog copiedDog(originalDog);
	std::cout << "\nCopied dog ideas:" << std::endl;
	std::cout << "  Idea 0: " << copiedDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "  Idea 1: " << copiedDog.getBrain()->getIdea(1) << std::endl;
	
	originalDog.getBrain()->setIdea(0, "Changed idea!");
	std::cout << "\nAfter modifying original:" << std::endl;
	std::cout << "  Original idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "  Copied idea 0: " << copiedDog.getBrain()->getIdea(0) << std::endl;
	
	if (originalDog.getBrain()->getIdea(0) != copiedDog.getBrain()->getIdea(0))
		std::cout << "✓ Deep copy successful - different Brain objects!" << std::endl;
	else
		std::cout << "✗ Shallow copy detected - same Brain object!" << std::endl;
	
	std::cout << "\n--- Test 4: Assignment Operator Deep Copy ---" << std::endl;
	Cat originalCat;
	originalCat.getBrain()->setIdea(0, "Catch the red dot!");
	
	Cat assignedCat;
	assignedCat = originalCat;
	
	originalCat.getBrain()->setIdea(0, "Fish are tasty");
	
	std::cout << "Original cat idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
	std::cout << "Assigned cat idea: " << assignedCat.getBrain()->getIdea(0) << std::endl;
	
	if (originalCat.getBrain()->getIdea(0) != assignedCat.getBrain()->getIdea(0))
		std::cout << "✓ Assignment deep copy successful!" << std::endl;
	else
		std::cout << "✗ Assignment shallow copy detected!" << std::endl;
	
	std::cout << "\n--- Test 5: Cleanup (Destructor Order Test) ---" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << "Deleting animal[" << i << "]:" << std::endl;
		delete animals[i];
	}
	
	std::cout << "\n=== Test Complete - Check for Memory Leaks! ===" << std::endl;
	return 0;
}
