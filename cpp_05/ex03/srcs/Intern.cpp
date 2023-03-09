/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:19:21 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/01 21:56:26 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Intern.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"

Intern::Intern(){
	std::cout << "Intern created" << std::endl;
}

Intern::Intern(const Intern& src){
	std::cout << "Intern copied" << std::endl;
	*this = src;
}

Intern& Intern::operator=(const Intern& src){
	std::cout << "Intern copy instance" << std::endl;
	(void)src;
	return (*this);
}

Intern::~Intern(){
}

static AForm*	newShrubberyCreationForm(std::string const & target) {
	return (new ShrubberyCreationForm(target));
}

static AForm*	newRobotomyRequestForm(std::string const & target) {
	return (new RobotomyRequestForm(target));
}

static AForm*	newPresidentialPardonForm(std::string const & target) {
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeForm(std::string name, std::string target){
	typedef AForm* (*ptrForm)(const std::string& target);
	ptrForm formArray[] = {&newShrubberyCreationForm,
		&newRobotomyRequestForm, &newPresidentialPardonForm};
	std::string formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidental pardon"
	};
	int i = 0;
	while (i < 3 && formNames[i] != name){
		i++;
	}
	
	if (i == 3){
`		throw (Intern::NoFormException());
		return (nullptr);
	}
	return (formArray[i](target));
}
