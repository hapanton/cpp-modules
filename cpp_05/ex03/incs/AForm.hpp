/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:11:30 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/30 23:38:22 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class AForm{
	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_gradeToSign;
		const unsigned int	_gradeToExecute;
	public:
		AForm(const std::string name, unsigned int gradeToSign,
			unsigned int gradeToExecute);
		AForm(const AForm& src);
		AForm& operator=(const AForm& src);
		virtual ~AForm();

		const std::string			getName() const;
		bool						getSigned() const;
		unsigned int				getGradeToSign() const;
		unsigned int				getGradeToExecute() const;
		virtual const std::string	getTarget(void) const = 0;

		virtual void				beSigned(const Bureaucrat& src);
		virtual void       			execute( const Bureaucrat& executor ) const = 0;

		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Grade too high");
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Grade too low");
				}
		};
			class NotSignedExcetion : public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Form not signed");
				}
		};
};

std::ostream& operator<<(std::ostream& o, const AForm& src);

#endif