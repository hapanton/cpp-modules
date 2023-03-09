/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:29:37 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/31 23:11:38 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AForm.hpp"
#include "../incs/Bureaucrat.hpp"
#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"

int main( void )
{
	try{
		Bureaucrat kafka("Kafka", 149);
		Bureaucrat middleman("Middleman", 30);
		Bureaucrat coolDude("Cool Dude", 1);
		ShrubberyCreationForm form("garden");
		kafka.signForm(form);
		middleman.executeForm(form);
		coolDude.signForm(form);
		kafka.executeForm(form);
		coolDude.executeForm(form);
	}
	catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}