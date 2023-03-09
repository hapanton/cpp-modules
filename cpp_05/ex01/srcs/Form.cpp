/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:39:14 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/30 23:48:19 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Form.hpp"

Form::Form(const std::string name,
			unsigned int gradeToSign, unsigned int gradeToExecute) : 
			_name(name), _signed(false), _gradeToSign(gradeToSign),
			_gradeToExecute(gradeToExecute){
    if ( gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if ( gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
	std::cout << "Form " << this->getName() << " created" << std::endl;
}

Form::Form(const Form& src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign),
			_gradeToExecute(src._gradeToExecute){
	std::cout << "Form " << this->getName() << " copied" << std::endl;
}

Form& Form::operator=(const Form& src){
	// this->_name = src.getName();
	this->_signed = src.getSigned();
	// this->_gradeToSign = src.getGradeToSign();
	// this->_gradeToExecute = src.getGradeToExecute();
	std::cout << "Form " << this->getName() << " copy instance" << std::endl;
	return(*this);
}

Form::~Form(){
}

const std::string	Form::getName() const{
	return (this->_name);
}

bool				Form::getSigned() const{
	return(this->_signed);
}

unsigned int		Form::getGradeToSign() const{
	return(this->_gradeToSign);
}

unsigned int		Form::getGradeToExecute() const{
	return(this->_gradeToExecute);
}

void				Form::beSigned(const Bureaucrat& src){
	if (src.getGrade() > this->_gradeToSign)
		throw (Form::GradeTooLowException());
	this->_signed = true;
}

std::ostream& operator<<(std::ostream& o, const Form& src){
    o << "***** Form " << src.getName() << " *****"<< std::endl;
    o << "Grade to sign: " << src.getGradeToSign() << std::endl
      << "Grade to execute: " << src.getGradeToExecute() << std::endl
	  << "Is signed: " << src.getSigned();
	return (o);
}