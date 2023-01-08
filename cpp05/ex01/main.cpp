/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:26:35 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 12:31:03 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "In a government office, there is a bureaucracy hierarchy with various bureaucrats." << std::endl;
	std::cout << "John is a low level bureaucrat with grade 150." << std::endl;
	Bureaucrat john("John", 150);
	std::cout << john << std::endl;

	std::cout << "Jane is a higher level bureaucrat with grade 1." << std::endl;
	Bureaucrat jane("Jane", 1);
	std::cout << jane << std::endl;

	std::cout << "John is given a form to fill out, Form 1, which requires a grade to sign of 5 and a grade to execute of 10." << std::endl;
	Form form1("Form 1", 5, 10);
	std::cout << form1 << std::endl;

	std::cout << "John tries to fill out the form, but his grade is too low." << std::endl;
	john.signForm(form1);
	std::cout << form1 << std::endl;

	std::cout << "Jane, being a higher level bureaucrat, is able to fill out the form and sign it." << std::endl;
	std::cout << "Jane is given the form to fill out." << std::endl;
	jane.signForm(form1);
	std::cout << form1 << std::endl;

	std::cout << "The form is now complete and ready to be executed." << std::endl;

	return (0);
}
