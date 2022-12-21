/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:18:44 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 18:30:22 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	&stringREF = str;
	std::string *stringPTR = &str;

	std::cout << "Displaying adresses\n" << std::endl;
	std::cout << "string adr: " << &str << std::endl;
	std::cout << "stringPTR adr: " << stringPTR << std::endl;
	std::cout << "stringREF adr: " << &stringREF << std::endl;

	std::cout << "\nDisplaying values\n" << std::endl;
	std::cout << "string val: " << str << std::endl;
	std::cout << "stringPTR val: " << *stringPTR << std::endl;
	std::cout << "stringREF val: " << stringREF << std::endl;

	return (0);
}
