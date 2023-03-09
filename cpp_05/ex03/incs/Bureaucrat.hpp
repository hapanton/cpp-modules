/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:32:48 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/31 22:40:03 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat{
	private:
		const std::string	_name;
		unsigned int		_grade;
	public:
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat& operator=(const Bureaucrat& src);
		~Bureaucrat();

		const std::string	getName() const;
		unsigned int		getGrade() const;

		void				incrementGrade();
		void				decrementGrade();

		void				signForm(AForm& src);
		void				executeForm(AForm const & form);


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

std::ostream& operator<<(std::ostream& o, const Bureaucrat& src);

#endif