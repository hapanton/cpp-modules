/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:04:45 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/31 23:10:56 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string& target )
	: AForm("Robotomy Request Form", 72, 45), _target(target){
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& src )
	: AForm(src), _target(src._target){
}

RobotomyRequestForm&  RobotomyRequestForm::operator=( RobotomyRequestForm& src ){
	(void) src;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

const std::string	RobotomyRequestForm::getTarget(void) const{
	return(this->_target);
}

void       RobotomyRequestForm::execute( const Bureaucrat& executor ) const{
	if (this->getSigned() == false){
		throw (AForm::NotSignedExcetion());
	}
	else if (executor.getGrade() > this->getGradeToExecute()){
		throw (AForm::GradeTooLowException());
	}
	static int	i = 0;
	if (++i % 2 == 1){
		std::cout << this->getTarget() << " has been robotized!" << std::endl;
	}
	else{
		std::cout << this->getTarget() << " is still alive, robotomy failed!" << std::endl;
	}
}