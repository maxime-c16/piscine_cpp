/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 21:09:30 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/14 21:29:47 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>

Base* generate( void )
{
	int r = rand() % 3;
	if (r == 0)
		return new A();
	else if (r == 1)
		return new B();
	else
		return new C();
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown Type" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Unknown Type" << std::endl;
			}
		}
	}
}

int main()
{
	std::cout << "Testing generate() function: " << std::endl;
	for (int i = 0; i < 10; i++)
	{
		Base* p = generate();
		std::cout << "Type: ";
		identify(p);
		std::cout << "Type using reference: ";
		identify(*p);
		std::cout << std::endl;
		delete p;
	}
	Base* invalid_ptr = new Base();
	std::cout << "Testing invalid pointer: " << std::endl << std::endl;
	std::cout << "Type: ";
	identify(invalid_ptr);
	std::cout << "Type using reference: ";
	identify(*invalid_ptr);
	std::cout << std::endl;
	delete invalid_ptr;
	return 0;
}

