/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:16:48 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/27 13:26:52 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class AForm
{
	public:
		AForm( void );
		AForm( const AForm &ref );
		AForm( const std::string &name, int signGrade, int execGrade );
		virtual ~AForm( void );

		AForm			&operator=( const AForm &ref );

		const	std::string	&getName( void ) const;
		bool				isSigned( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		void				beSigned( const Bureaucrat &bureaucrat );
		virtual void		execute( const Bureaucrat &executor ) const;
		virtual void		executeAction( void ) const = 0;

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

	protected:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
};

std::ostream	&operator<<( std::ostream &os, const AForm &form );

#endif
