/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:35:21 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/01 18:39:11 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade){
	if ( grade < 1 )
        throw Bureaucrat::GradeTooHighException();
    if ( grade > 150 )
        throw Bureaucrat::GradeTooLowException();
	std::cout << this->getName() << " created with grade " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name), _grade(src._grade){
	std::cout << this->getName() << " copied with grade " << this->getGrade() << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src){
	this->_grade = src.getGrade();
	// this->_name = src.getName(); // а как тогда??
	std::cout << this->getName() << " copy instance with grade " << this->getGrade() << std::endl;
	return(*this);
}

Bureaucrat::~Bureaucrat(){
}

const std::string	Bureaucrat::getName() const{
	return (this->_name);
}

unsigned int		Bureaucrat::getGrade() const{
	return (this->_grade);
}

void				Bureaucrat::decrementGrade(){
	if (this->_grade > 149)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void				Bureaucrat::incrementGrade(){
	if (this->_grade < 2)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void				Bureaucrat::signForm(AForm& src){
	try{
		src.beSigned(*this);
		std::cout << this->getName() << " signed " << src.getName() << std::endl;
	}
	catch(std::exception &e){
		std::cerr << "Bureaucrat " << this->getName() << " couldn't sign form "
			<< src.getName() << " beacuse " << e.what() << std::endl;
	}
}

void				Bureaucrat::executeForm(AForm const & form){
	try{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(std::exception &e){
		std::cerr << "Bureaucrat " << this->getName() << " couldn't execute "
			<< form.getName() << " beacuse " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& src){
	o << src.getName() << " has grade " << src.getGrade();
	return (o);
}