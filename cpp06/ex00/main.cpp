/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:57:53 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/14 11:16:25 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <cstdlib>
#include <cmath>

bool	is_char(const std::string str)
{
	if (str.length() == 1)
	{
		if (!isdigit(str[0]))
			return (true);
	}
	return (false);
}

bool	is_int(const std::string str)
{
	if (std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
	{
		for (size_t i = 1; i < str.length(); i++)
		{
			if (!std::isdigit(str[i]))
				return (false);
		}
		return (true);
	}
	return (false);
}

bool	is_float(const std::string str)
{
	int dot = 0;

	if (std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
	{
		for (size_t i = 1; i < str.length() - 1; i++)
		{
			if (str[i] == '.')
				dot++;
			else if (!std::isdigit(str[i]))
				return (false);
		}
	}
	else
		return (false);
	if (dot == 1 && str[str.length() - 1] == 'f')
		return (true);
	return (false);
}

bool	is_double(const std::string str)
{
	if (std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
	{
		int dot = 0;
		for (size_t i = 1; i < str.length(); i++)
		{
			if (str[i] == '.')
				dot++;
			else if (!std::isdigit(str[i]))
				return (false);
		}
		if (dot == 1)
			return (true);
	}
	return (false);
}

void	print_char(const char *str)
{
	if (isprint(str[0]))
		std::cout << "char: '" << str[0] << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;

}

void	print_int(const char *str)
{
	int value = atoi(str);

	if (isprint(value))
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << value << std::endl;

	std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void	print_float(const char *str)
{
	float value = atof(str);
	if (value > std::numeric_limits<char>::max() || value < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;

	if (value == static_cast<int>(value))
	{
		std::cout << "float: " << value << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << value << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(value) << std::endl;
	}
}

void	print_double(const char *str)
{
	double value = atof(str);
	if (value > std::numeric_limits<char>::max() || value < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;

	if (value == static_cast<int>(value))
	{
		std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
		std::cout << "double: " << value << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
		std::cout << "double: " << value << std::endl;
	}
}

void	print_error( void )
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void	print_nan(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "-inff" || str == "-inf")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (str == "+inff" || str == "+inf")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

void	check_type(std::string str)
{
	if (is_char(str))
		print_char(str.c_str());
	else if (is_int(str))
		print_int(str.c_str());
	else if (is_float(str))
		print_float(str.c_str());
	else if (is_double(str))
		print_double(str.c_str());
	else if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
		print_nan(str);
	else
		print_error();
}


int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert [string]" << std::endl;
		return (1);
	}

	std::string	target(av[1]);
	check_type(target);

	return (0);
}
