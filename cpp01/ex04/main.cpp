/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 10:54:03 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/22 13:46:14 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void replace_line(std::string& line, const std::string& s1, const std::string& s2)
{
	size_t pos = line.find(s1);
	if (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./replace [filename] [s1] [s2]" << std::endl;
		return (1);
	}

	std::string		filename = av[1];
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::ifstream	ifs(filename);

	if (s1.empty() || s2.empty())
	{
		std::cout << "s1 and s2 must not be empty" << std::endl;
		return (1);
	}
	else if (filename.empty())
	{
		std::cout << "filename must not be empty" << std::endl;
		return (1);
	}

	if (ifs.is_open())
	{
		std::string		line;
		std::ofstream	ofs(filename + ".replace");

		while (std::getline(ifs, line))
		{
			while (line.find(s1) != std::string::npos)
				replace_line(line, s1, s2);
			ofs << line << std::endl;
		}
		ofs.close();
	}
	else
		std::cout << "Error: file " << filename << " does not exist" << std::endl;

}
