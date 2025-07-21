/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 10:03:01 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 16:31:59 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			std::cout << std::toupper(av[i][j]);
			j++;
		}
		if (i < ac - 1)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;

	std::cout << "\n=== KEY LEARNINGS ===" << std::endl;
	std::cout << "• #include <iostream> provides std::cout for output" << std::endl;
	std::cout << "• std::toupper() converts characters to uppercase" << std::endl;
	std::cout << "• C-style arrays (char **av) vs C++ strings" << std::endl;
	std::cout << "• Command line arguments: int ac, char **av" << std::endl;
	std::cout << "• Namespace usage: std:: prefix for standard library" << std::endl;
	std::cout << "• C++98 compilation standard enforces older syntax" << std::endl;

	return (0);
}
