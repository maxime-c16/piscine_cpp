/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 00:22:33 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 00:34:14 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form( void );
		Form( std::string name, int gradeToSign, int gradeToExecute );
		Form( Form const &ref );
		~Form( void );

		Form			&operator=( Form const &ref );

		std::string		getName( void ) const;
		bool			getSigned( void ) const;
		int				getGradeToSign( void ) const;
		int				getGradeToExecute( void ) const;
		void			beSigned( Bureaucrat const &bureaucrat );

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

std::ostream	&operator<<( std::ostream &out, const Form &form );

#endif
