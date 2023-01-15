/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:20:18 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/15 22:30:39 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	int result = easyfind(v, 3);
	if (result != 3) {
		std::cout << "Test case 1 failed: expected value 3, got " << result << std::endl;
	} else {
		std::cout << "Test case 1 passed" << std::endl;
	}
	try{
	easyfind(v, 6);
	}catch(std::exception e){
		std::cout << "Test case 2 passed" << std::endl;
	}

	std::list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	l.push_back(50);
	result = easyfind(l, 20);
	if (result != 20) {
		std::cout << "Test case 3 failed: expected value 20, got " << result << std::endl;
	} else {
		std::cout << "Test case 3 passed" << std::endl;
	}
	try{
	easyfind(l, 60);
	}catch(std::exception e){
		std::cout << "Test case 4 passed" << std::endl;
	}

	std::set<int> s;
	s.insert(100);
	s.insert(200);
	s.insert(300);
	s.insert(400);
	s.insert(500);
	result = easyfind(s, 500);
	if (result != 500) {
		std::cout << "Test case 5 failed: expected value 500, got " << result << std::endl;
	} else {
		std::cout << "Test case 5 passed" << std::endl;
	}
	try{
	easyfind(s, 600);
	}catch(std::exception e){
		std::cout << "Test case 6 passed" << std::endl;
	}

	std::deque<int> d;
	d.push_back(10000);
	d.push_back(20000);
	d.push_back(30000);
	d.push_back(40000);
	d.push_back(50000);
	result = easyfind(d, 20000);
	if (result != 20000) {
		std::cout << "Test case 7 failed: expected value 20000, got " << result << std::endl;
	} else {
		std::cout << "Test case 7 passed" << std::endl;
	}
	try{
	easyfind(d, 60000);
	}catch(std::exception e){
		std::cout << "Test case 8 passed" << std::endl;
	}

	return (0);
}
