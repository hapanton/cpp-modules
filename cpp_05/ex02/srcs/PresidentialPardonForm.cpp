/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:05:00 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/31 23:05:55 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string& target )
	: AForm("Robotomy Request Form", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& src )
	: AForm(src), _target(src._target){
}

PresidentialPardonForm&  PresidentialPardonForm::operator=( PresidentialPardonForm& src ){
	(void) src;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

const std::string	PresidentialPardonForm::getTarget(void) const{
	return(this->_target);
}

void       PresidentialPardonForm::execute( const Bureaucrat& executor ) const{
	if (this->getSigned() == false)
		throw (AForm::NotSignedExcetion());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (AForm::GradeTooLowException());
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}