/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:41:36 by mcauchy           #+#    #+#             */
/*   Updated: 2022/11/25 14:14:50 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (j < ac - 1)
		{
			i = 0;
			while (av[j + 1][i])
			{
				std::cout << (char)toupper(av[j + 1][i]);
				i++;
			}
			std::cout << ' ';;
			j++;
		}
		std::cout << std::endl;
	}
	return (0);
}
