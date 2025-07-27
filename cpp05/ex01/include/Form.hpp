/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:16:48 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/27 13:24:31 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	public:
		Form( void );
		Form( const Form &ref );
		Form( const std::string &name, int signGrade, int execGrade );
		~Form( void );

		Form			&operator=( const Form &ref );

		const	std::string	&getName( void ) const;
		bool				isSigned( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		void				beSigned( const Bureaucrat &bureaucrat );
		void				execute( const Bureaucrat &executor ) const;

		class	GradeTooLowException : public std::exception
		{
			public:
				const char	*what( void ) const throw()
				{
					return "Grade too low to sign the form!";
				}
		};
		class	GradeTooHighException : public std::exception
		{
			public:
				const char	*what( void ) const throw()
				{
					return "Grade too high to sign the form!";
				}
		};

	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
};

std::ostream	&operator<<( std::ostream &os, const Form &form );

#endif
