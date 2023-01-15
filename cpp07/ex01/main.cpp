/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:07:13 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/15 13:15:36 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main( void )
{
	// Test with int array
	int arr[] = {1, 2, 3, 4, 5};
	std::cout << "Test with int array: ";
	iter(arr, 5, print<int>);
	std::cout << std::endl;

	// Test with double array
	double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::cout << "Test with double array: ";
	iter(arr2, 5, print<double>);
	std::cout << std::endl;

	// Test with char array
	char arr3[] = {'a', 'b', 'c', 'd', 'e'};
	std::cout << "Test with char array: ";
	iter(arr3, 5, print<char>);
	std::cout << std::endl;

	// Test with string array
	std::string arr4[] = {"str1", "str2", "str3", "str4", "str5"};
	std::cout << "Test with string array: ";
	iter(arr4, 5, print<std::string>);
	std::cout << std::endl;

	// Test with float array
	float arr5[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
	std::cout << "Test with float array: ";
	iter(arr5, 5, print<float>);
	std::cout << std::endl;

	//test with bool array
	bool arr6[] = {true, false, true, false, true};
	std::cout << "Test with bool array: ";
	iter(arr6, 5, print<bool>);
	std::cout << std::endl;

	// Test with function template
	std::cout << "Test with function template: ";
	iter(arr, 5, increment<int>);
	iter(arr, 5, print<int>);

	std::cout << std::endl;

	return (0);
}
