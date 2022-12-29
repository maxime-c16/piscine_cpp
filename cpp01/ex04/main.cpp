/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 10:54:03 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/29 11:20:02 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int replace_line(std::string& line, const std::string& s1, const std::string& s2, size_t last_pos)
{
	size_t pos = line.find(s1);
	if (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
	}
	if (last_pos == pos)
		return (1);
	last_pos = pos;
	return (0);
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
	std::ifstream	ifs(filename.c_str(), std::ifstream::in);

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
		std::ofstream	ofs((filename + ".replace").c_str(), std::ofstream::out);

		while (std::getline(ifs, line))
		{
			size_t last_pos = -1;
			while (line.find(s1) != std::string::npos)
			{
				if (replace_line(line, s1, s2, last_pos))
					break;
			}
			ofs << line << std::endl;
		}
		ofs.close();
	}
	else
		std::cout << "Error: file " << filename << " does not exist" << std::endl;

}
