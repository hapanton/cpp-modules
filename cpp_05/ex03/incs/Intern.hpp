/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:12:28 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/01 18:05:23 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#pragma once
#include "AForm.hpp"

class Intern{
	public:
		Intern();
		Intern(const Intern &src);
		Intern& operator=(const Intern &src);
		~Intern();

		AForm*	makeForm(std::string name, std::string target);

		class NoFormException : public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Such form is not available");
				}
		};
	private:
};

#endif