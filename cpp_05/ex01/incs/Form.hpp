/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:11:30 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/30 23:38:22 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_gradeToSign;
		const unsigned int	_gradeToExecute;
	public:
		Form(const std::string name, unsigned int gradeToSign,
			unsigned int gradeToExecute);
		Form(const Form& src);
		Form& operator=(const Form& src);
		~Form();

		const std::string	getName() const;
		bool				getSigned() const;
		unsigned int		getGradeToSign() const;
		unsigned int		getGradeToExecute() const;

		void				beSigned(const Bureaucrat& src);

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
};

std::ostream& operator<<(std::ostream& o, const Form& src);

#endif