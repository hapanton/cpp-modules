/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:39:14 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/30 23:48:19 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AForm.hpp"

AForm::AForm(const std::string name,
			unsigned int gradeToSign, unsigned int gradeToExecute) : 
			_name(name), _signed(false), _gradeToSign(gradeToSign),
			_gradeToExecute(gradeToExecute){
    if ( gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if ( gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
	std::cout << "Form " << this->getName() << " created" << std::endl;
}

AForm::AForm(const AForm& src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign),
			_gradeToExecute(src._gradeToExecute){
	std::cout << "Form " << this->getName() << " copied" << std::endl;
}

AForm& AForm::operator=(const AForm& src){
	// this->_name = src.getName();
	this->_signed = src.getSigned();
	// this->_gradeToSign = src.getGradeToSign();
	// this->_gradeToExecute = src.getGradeToExecute();
	std::cout << "Form " << this->getName() << " copy instance" << std::endl;
	return(*this);
}

AForm::~AForm(){
}

const std::string	AForm::getName() const{
	return (this->_name);
}

bool				AForm::getSigned() const{
	return(this->_signed);
}

void		AForm::execute( const Bureaucrat& executor ) const{
	if (this->getSigned() == false){
		throw (AForm::NotSignedExcetion());
	}
	else if (executor.getGrade() > this->getGradeToExecute()){
		throw (AForm::GradeTooLowException());
	}
}

unsigned int		AForm::getGradeToSign() const{
	return(this->_gradeToSign);
}

unsigned int		AForm::getGradeToExecute() const{
	return(this->_gradeToExecute);
}

void				AForm::beSigned(const Bureaucrat& src){
	if (src.getGrade() > this->_gradeToSign)
		throw (AForm::GradeTooLowException());
	this->_signed = true;
}

std::ostream& operator<<(std::ostream& o, const AForm& src){
    o << "***** Form " << src.getName() << " *****"<< std::endl;
    o << "Grade to sign: " << src.getGradeToSign() << std::endl
      << "Grade to execute: " << src.getGradeToExecute() << std::endl
	  << "Is signed: " << src.getSigned();
	return (o);
}