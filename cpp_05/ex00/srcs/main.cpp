/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:29:37 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/31 22:51:34 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

int main (void){
	try{
		Bureaucrat bebur = Bureaucrat("bebur", 2);
		bebur.incrementGrade();
		std::cout << bebur << std::endl;
		bebur.incrementGrade();
		std::cout << bebur << std::endl;
	}
	catch(std::exception &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try{
		Bureaucrat kafka = Bureaucrat("kafka", 149);
		kafka.decrementGrade();
		std::cout << kafka << std::endl;
		kafka.decrementGrade();
		std::cout << kafka << std::endl;
	}
	catch(std::exception &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}
}