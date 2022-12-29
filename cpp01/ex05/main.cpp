/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:58:00 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/27 12:57:25 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	Harl harl;

	std::cout << "--- Story ---" << std::endl;
	std::cout << "\n-- Harl is a regular customer at a fast food restaurant. One day, he orders a 7XL-double-cheese-triple-pickle-special-ketchup burger, but he asks for extra bacon to be added to it.\n" << std::endl;
	harl.complain("DEBUG");
	std::cout << "\n-- The cashier tells Harl that adding extra bacon will cost extra money. Harl is surprised and complains about it.\n" << std::endl;
	harl.complain("INFO");
	std::cout << "\n-- Harl starts to argue with the cashier, saying that he has been a regular customer for years and should be entitled to some special treatment.\n" << std::endl;
	harl.complain("WARNING");
	std::cout << "\n-- The cashier insists that the policy is the same for all customers and refuses to give Harl extra bacon for free. Harl becomes angry and demands to speak to the manager.\n" << std::endl;
	harl.complain("ERROR");
	std::cout << "--- End of story ---" << std::endl;

	std::cout << "\n--- Test invalid level ---" << std::endl;
	harl.complain("INVALID");

	return (0);
}
