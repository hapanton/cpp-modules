/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:32:48 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/30 23:32:49 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#pragma once 

class Bureaucrat{
	private:
		const std::string	_name;
		unsigned int		_grade;
	public:
		Bureaucrat(const std::string name, unsigned int grade); //почему тут надо референс на имя?
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat& operator=(const Bureaucrat& src);
		~Bureaucrat();

		const std::string	getName() const;
		unsigned int		getGrade() const;

		void				incrementGrade();
		void				decrementGrade();


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