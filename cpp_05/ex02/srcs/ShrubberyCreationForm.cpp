/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:04:34 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/31 23:04:52 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target )
	: AForm("Shrubbery Creation Form", 145, 137), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src )
	: AForm(src), _target(src._target){
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=( ShrubberyCreationForm& src ){
	(void) src;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

const std::string	ShrubberyCreationForm::getTarget(void) const{
	return(this->_target);
}

void       ShrubberyCreationForm::execute( const Bureaucrat& executor ) const{
	if (this->getSigned() == false)
		throw (AForm::NotSignedExcetion());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (AForm::GradeTooLowException());
	std::ofstream file( this->getTarget() + "_shrubbery" );
	file << "                                                   ." << std::endl;
    file << "                                    .         ;     " << std::endl;
    file << "       .              .              ;%     ;;      " << std::endl;
    file << "         ,           ,                :;%  %;       " << std::endl;
    file << "          :         ;                   :;%;'     .," << std::endl;
    file << " ,.        %;     %;            ;        %;'    ,;  " << std::endl;
    file << "   ;       ;%;  %%;        ,     %;    ;%;    ,%'   " << std::endl;
    file << "    %;       %;%;      ,  ;       %;  ;%;   ,%;'    " << std::endl;
    file << "     ;%;      %;        ;%;        % ;%;  ,%;'      " << std::endl;
    file << "      `%;.     ;%;     %;'         `;%%;.%;'        " << std::endl;
    file << "       `:;%.    ;%%. %@;        %; ;@%;%'           " << std::endl;
    file << "          `:%;.  :;bd%;          %;@%;'             " << std::endl;
    file << "            `@%:.  :;%.         ;@@%;'              " << std::endl;
    file << "              `@%.  `;@%.      ;@@%;                " << std::endl;
    file << "                `@%%. `@%%    ;@@%;                 " << std::endl;
    file << "                  ;@%. :@%%  %@@%;                  " << std::endl;
    file << "                    %@bd%%%bd%%:;                   " << std::endl;
    file << "                      #@%%%%%:;;                    " << std::endl;
    file << "                      %@@%%%::;                     " << std::endl;
    file << "                      %@@@%(o);  . '                " << std::endl;
    file << "                      %@@@o%;:(.,'                  " << std::endl;
    file << "                  `.. %@@@o%::;                     " << std::endl;
    file << "                     `)@@@o%::;                     " << std::endl;
    file << "                      %@@(o)::;                     " << std::endl;
    file << "                     .%@@@@%::;                     " << std::endl;
    file << "                     ;%@@@@%::;.                    " << std::endl;
    file << "                    ;%@@@@%%:;;;.                   " << std::endl;
    file << "                ...;%@@@@@%%:;;;;,..                " << std::endl;
	file.close();
}