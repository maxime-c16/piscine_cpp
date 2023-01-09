/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:57:48 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 13:59:18 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm( void );

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &ref);

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
		PresidentialPardonForm( void );

		std::string _target;
};

#endif
