/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:42:19 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/15 12:39:36 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <cstdlib>
# include <fstream>


# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm( void );
		AForm( std::string name, int gradeToSign, int gradeToExecute );
		AForm( AForm const &ref );
		virtual ~AForm( void );

		AForm			&operator=( AForm const &ref );

		std::string		getName( void ) const;
		bool			getSigned( void ) const;
		int				getGradeToSign( void ) const;
		int				getGradeToExecute( void ) const;
		void			beSigned( Bureaucrat const &bureaucrat );
		virtual void	execute(Bureaucrat const &executor) const = 0;

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

	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;
};

std::ostream	&operator<<( std::ostream &out, const AForm &AForm );

#endif
