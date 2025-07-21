/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:34:01 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 17:06:09 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

// Color definitions for enhanced output
#define C_GREEN "\033[32m"
#define C_RESET "\033[0m"
#define C_YELLOW "\033[33m"
#define C_RED "\033[31m"
#define C_BLUE "\033[34m"
#define C_MAGENTA "\033[35m"
#define C_CYAN "\033[36m"

void printTest(const std::string& title) {
    std::cout << C_CYAN << "\n=== TEST " << title << " ===" << C_RESET << std::endl;
}

void	replace( std::ifstream &inputFile, const std::string &s1, const std::string &s2,
	const std::string &filename )
{
	std::string		line;
	std::ofstream	ofs((filename + ".replace").c_str(), std::ofstream::out);

	if (!ofs)
	{
		std::cerr << C_RED << "Error: Could not create output file." << C_RESET << std::endl;
		return ;
	}

	std::cout << C_GREEN << "Replacing '" << s1 << "' with '" << s2 << "' in file: " << filename << C_RESET << std::endl;

	while (std::getline(inputFile, line))
	{
		size_t pos = 0;
		int replacements = 0;

		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
			replacements++;
		}

		if (replacements > 0)
			std::cout << C_YELLOW << "Line modified (" << replacements << " replacements): " << line << C_RESET << std::endl;

		ofs << line << std::endl;
	}

	std::cout << C_GREEN << "Output written to: " << filename << ".replace" << C_RESET << std::endl;
}

void createTestFile(const std::string& filename, const std::string& content) {
	std::ofstream file(filename.c_str());
	if (file.is_open()) {
		file << content;
		file.close();
		std::cout << C_BLUE << "Created test file: " << filename << C_RESET << std::endl;
	}
}

void runTests() {
	printTest("1: BASIC REPLACEMENT");
	createTestFile("test1.txt", "Hello world\nHello universe\nGoodbye world\n");

	std::ifstream file1("test1.txt");
	if (file1.is_open()) {
		replace(file1, "Hello", "Hi", "test1.txt");
		file1.close();
	}

	printTest("2: EDGE CASE - OVERLAPPING PATTERNS");
	createTestFile("test2.txt", "aaaa bbb aaaa\nSpecial case: aaa\n");

	std::ifstream file2("test2.txt");
	if (file2.is_open()) {
		replace(file2, "aa", "XX", "test2.txt");
		file2.close();
	}
}

int	main( int ac, char **av )
{
	if (ac == 1) {
		std::cout << C_CYAN << "No arguments provided. Running demonstration tests..." << C_RESET << std::endl;
		runTests();
	}
	else if (ac != 4)
	{
		std::cerr << C_RED << "Usage: ./replace <filename> <s1> <s2>" << C_RESET << std::endl;
		std::cerr << C_YELLOW << "Or run without arguments for demonstration" << C_RESET << std::endl;
		return (1);
	}
	else
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];

		if (s1.empty())
		{
			std::cerr << C_RED << "Error: s1 (search string) cannot be empty." << C_RESET << std::endl;
			return (1);
		}
		if (filename.empty())
		{
			std::cerr << C_RED << "Error: filename cannot be empty." << C_RESET << std::endl;
			return (1);
		}

		std::ifstream inputFile(filename.c_str(), std::ifstream::in);
		if (!inputFile)
		{
			std::cerr << C_RED << "Error: Could not open file " << filename << C_RESET << std::endl;
			return (1);
		}

		replace(inputFile, s1, s2, filename);
		inputFile.close();
	}

	std::cout << C_CYAN << "\n=== KEY LEARNINGS ===" << C_RESET << std::endl;
	std::cout << C_GREEN << "• File I/O streams: std::ifstream (input) and std::ofstream (output)" << C_RESET << std::endl;
	std::cout << C_GREEN << "• String manipulation: find(), erase(), insert() methods" << C_RESET << std::endl;
	std::cout << C_GREEN << "• C++98 compatibility: .c_str() for string-to-char* conversion" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Error handling: Check file operations and validate input" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Position tracking: Avoid infinite loops in string replacement" << C_RESET << std::endl;
	std::cout << C_RED << "• Memory consideration: Large files should be processed line-by-line" << C_RESET << std::endl;

	return (0);
}
