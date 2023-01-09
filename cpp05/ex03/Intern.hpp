/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 08:24:14 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/09 08:30:21 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

# define INTERN_HPP

# include "AForm.hpp"

class Intern
{
	public:
		Intern( void );
		Intern(const Intern	&other);
		~Intern( void );

		Intern	&operator=(const Intern	&other);

		AForm	*makeForm(int type, std::string target);

		class FormTypeDoesNotExist : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Form type does not exist";
				}
		};
};

#endif
