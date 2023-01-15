/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:53:49 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/15 19:38:32 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	// Test with int array
	Array<int> arr(5);
	for (unsigned int i = 0; i < arr.size(); i++) {
		arr[i] = i;
	}
	std::cout << std::endl << "Test with int array: ";
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	// Test with double array
	Array<double> arr2(5);
	for (unsigned int i = 0; i < arr2.size(); i++) {
		arr2[i] = i + 0.1;
	}
	std::cout << std::endl << "Test with double array: ";
	for (unsigned int i = 0; i < arr2.size(); i++) {
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;

	// Test with char array
	Array<char> arr3(5);
	for (unsigned int i = 0; i < arr3.size(); i++) {
		arr3[i] = 'a' + i;
	}
	std::cout << std::endl << "Test with char array: ";
	for (unsigned int i = 0; i < arr3.size(); i++) {
		std::cout << arr3[i] << " ";
	}
	std::cout << std::endl;

	// Test with copy constructor
	Array<int> arr4(arr);
	arr[0] = 99;
	std::cout << std::endl << std::endl << "Test with copy constructor: ";
	std::cout << std::endl << "Original array: ";
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl << "Copy array: ";
	for (unsigned int i = 0; i < arr4.size(); i++) {
		std::cout << arr4[i] << " ";
	}
	std::cout << std::endl;

	// Test with assignment operator
	Array<int> arr5;
	arr5 = arr4;
	arr4[0] = 0;
	std::cout << std::endl << std::endl << "Test with assignment operator: ";
	std::cout << std::endl << "Original array: ";
	for (unsigned int i = 0; i < arr4.size(); i++) {
		std::cout << arr4[i] << " ";
	}
	std::cout << std::endl << "Assigned array: ";
	for (unsigned int i = 0; i < arr5.size(); i++) {
		std::cout << arr5[i] << " ";
	}
	std::cout << std::endl;

	// Test out of range exception
	std::cout << std::endl << std::endl << "Test out of range exception: " << std::endl;
	try {
		std::cout << "arr[5]: " << arr[5] << std::endl;
	} catch (std::exception& e) {
		std::cout << " is out of range" << std::endl;
		std::cout << "Out of range exception: " << e.what() << std::endl;
	}

	return (0);	
}

