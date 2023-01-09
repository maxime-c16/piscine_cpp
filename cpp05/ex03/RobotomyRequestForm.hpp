/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:51:10 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 13:52:59 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm( void );

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &ref);

		void execute(const Bureaucrat& executor) const;

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Form is not signed";
				}
		};

	private:
		RobotomyRequestForm( void );

		std::string _target;

};

#endif
