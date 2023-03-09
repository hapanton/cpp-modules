/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:29:37 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/30 23:52:17 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"
#include "../incs/Form.hpp"

int main (void){
	try{
		Bureaucrat kafka("Kafka", 30);
		Form form("CONTRACT", 10, 1);
		std::cout << kafka << std::endl;
		std::cout << form << std::endl;
		kafka.signForm(form);
	}
	catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}