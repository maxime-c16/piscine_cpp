/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:52:43 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/15 12:40:05 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP

# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm	&other);
		virtual ~ShrubberyCreationForm( void );

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm	&other);

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
		ShrubberyCreationForm( void );

		std::string generateRandomTree( void ) const;

		std::string _target;
};

#endif
