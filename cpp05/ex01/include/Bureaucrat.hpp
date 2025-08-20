/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:11:39 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/05 17:10:03 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat( const Bureaucrat &ref );
		Bureaucrat( const std::string &name, int grade );
		~Bureaucrat( void );

		Bureaucrat	&operator=( const Bureaucrat &ref );

		const std::string	&getName( void ) const;
		int					getGrade( void ) const;
		void				incrementGrade( void );
		void				decrementGrade( void );
		void				signForm( class Form &form ) const;

		class	GradeTooHighException : public std::exception
		{
			public:
				const char	*what( void ) const throw()
				{
					return "Grade too high!";
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char	*what( void ) const throw()
				{
					return "Grade too low!";
				}
		};

		private:
			std::string			_name;
			int					_grade;
			void				_checkGrade( int grade ) const;
			static const int	_minGrade = 1;
			static const int	_maxGrade = 150;
			void				_setGrade( int grade );
			void				_copy( const Bureaucrat &ref );
};

std::ostream	&operator<<( std::ostream &os, const Bureaucrat &ref );

#endif
