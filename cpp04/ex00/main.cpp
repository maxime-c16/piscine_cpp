/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:54:48 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 22:09:23 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	std::cout << "Creating an Animal object using the default constructor..." << std::endl;
	const Animal* meta = new Animal();

	std::cout << "\nCreating a Dog object using the default constructor..." << std::endl;
	const Animal* j = new Dog();

	std::cout << "\nCreating a Cat object using the default constructor..." << std::endl;
	const Animal* i = new Cat();

	std::cout << "\nGetting the type of the Dog object..." << std::endl;
	std::cout << j->getType() << std::endl;

	std::cout << "\nGetting the type of the Cat object..." << std::endl;
	std::cout << i->getType() << std::endl;

	std::cout << "\nMaking the Cat object make a sound..." << std::endl;
	i->makeSound(); // will output the cat sound!

	std::cout << "\nMaking the Dog object make a sound..." << std::endl;
	j->makeSound();

	std::cout << "\nMaking the Animal object make a sound..." << std::endl;
	meta->makeSound();

	std::cout << "\nCreating a WrongAnimal object using the default constructor..." << std::endl;
	const WrongAnimal* wrong_meta = new WrongAnimal();

	std::cout << "\nCreating a WrongCat object using the default constructor..." << std::endl;
	const WrongAnimal* wrong_i = new WrongCat();

	std::cout << "\nGetting the type of the WrongCat object..." << std::endl;
	std::cout << wrong_i->getType() << std::endl;

	std::cout << "\nMaking the WrongCat object make a sound..." << std::endl;
	wrong_i->makeSound(); // will output the wrong animal sound!

	std::cout << "\nMaking the WrongAnimal object make a sound..." << std::endl;
	wrong_meta->makeSound();

	std::cout << "\nDeleting the objects..." << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wrong_meta;
	delete wrong_i;

	return (0);
}
