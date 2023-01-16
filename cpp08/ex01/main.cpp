/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:47:31 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/16 00:59:10 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

#define N 10000

int main()
{
	Span s(N);
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		int r = rand();
		s.addNumber(r);
	}

	clock_t start = clock();
	int shortest;
	try {
		shortest = s.shortestSpan();
		clock_t end = clock();
		double duration = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
		std::cout << "Shortest span (Span class): " << shortest << std::endl;
		std::cout << "Time taken for shortest span (Span class): " << duration << " milliseconds" << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	start = clock();
	int longest;
	try {
		longest = s.longestSpan();
		clock_t end = clock();
		double duration = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
		std::cout << "Longest span (Span class): " << longest << std::endl;
		std::cout << "Time taken for longest span (Span class): " << duration << " milliseconds" << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// Compare performance with vector class
	std::vector<int> v;
	for (int i = 0; i < N; i++) {
		int r = rand();
		v.push_back(r);
	}

	start = clock();
	int minVal, maxVal;
	try {
		minVal = *std::min_element(v.begin(), v.end());
		maxVal = *std::max_element(v.begin(), v.end());
		clock_t end = clock();
		double duration = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
		std::cout << "Shortest span (vector class): " << minVal - maxVal << std::endl;
		std::cout << "Time taken for shortest span (vector class): " << duration << " milliseconds" << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try
	{
		minVal = *std::min_element(v.begin(), v.end());
		maxVal = *std::max_element(v.begin(), v.end());
		clock_t end = clock();
		double duration = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
		std::cout << "Longest span (vector class): " << maxVal - minVal << std::endl;
		std::cout << "Time taken for longest span (vector class): " << duration << " milliseconds" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
