/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:58:09 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 12:41:57 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const &ref );
		~Bureaucrat( void );

		Bureaucrat		&operator=( Bureaucrat const &ref );

		class GradeTooHighException : public std::exception
		{
			const char *what( void ) const throw()
			{
				return ("Grade too high");
			}
		};

		class GradeTooLowException : public std::exception
		{
			const char *what( void ) const throw()
			{
				return ("Grade too low");
			}
		};

		std::string		getName( void ) const;
		int				getGrade( void ) const;
		void			incrementGrade( void );
		void			decrementGrade( void );
		void			signForm( AForm &ref ) const;

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream	&operator<<( std::ostream &out, const Bureaucrat &bureaucrat );

#endif
