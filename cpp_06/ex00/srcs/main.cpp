/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:29:37 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/04 20:24:10 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScalarConverter.hpp"

int main(int argc, char **argv){
	if (argc != 2)
		std::cout << "Only one variable allowed" << std::endl;
	else{
		try{
			ScalarConverter::convert(argv[1]);
		}
		catch(std::exception &e){
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
}