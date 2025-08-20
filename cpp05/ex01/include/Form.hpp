/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:00:44 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/05 17:07:36 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form( void );
		Form( const Form &ref );
		Form( const std::string &name, int signGrade, int execGrade );
		~Form( void );

		Form	&operator=( const Form &ref );
		friend std::ostream	&operator<<( std::ostream &os, const Form &ref );

		const std::string	&getName( void ) const;
		bool				isSigned( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		void				beSigned( const Bureaucrat &bureaucrat );
		void				execute( const Bureaucrat &executor ) const;

		class	GradeTooHighException : public std::exception
		{
			public:
				const char	*what( void ) const throw()
				{
					return "Form grade too high!";
				}
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char	*what( void ) const throw()
				{
					return "Form grade too low!";
				}
		};

	private:
		std::string	_name;
		bool		_signed;
		int			_signGrade;
		int			_execGrade;

		void	_checkGrade( int grade ) const;
		void	_setSigned( bool signedStatus );
		void	_copy( const Form &ref );
		
		static const int _minGrade = 1;
		static const int _maxGrade = 150;
};

#endif
