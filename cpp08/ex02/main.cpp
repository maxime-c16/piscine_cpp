/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:44:39 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/16 09:55:14 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <stack>

int main( void )
{
	// Test MutantStack
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of MutantStack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of MutantStack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "Elements of MutantStack: ";
	for (MutantStack<int>::it it = mstack.begin(); it != mstack.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	// Test std::stack
	std::stack<int> s;
	s.push(5);
	s.push(17);
	std::cout << "Top of std::stack: " << s.top() << std::endl;
	s.pop();
	std::cout << "Size of std::stack: " << s.size() << std::endl;
	s.push(3);
	s.push(5);
	s.push(737);
	s.push(0);
	std::cout << "Elements of std::stack: ";
	std::stack<int> tmp = s;
	while (!tmp.empty()) {
		std::cout << tmp.top() << " ";
		tmp.pop();
	}
	std::cout << std::endl;

	return 0;
}
