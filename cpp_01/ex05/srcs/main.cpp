/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:32:19 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/22 17:35:00 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"

int	main(void){
	std::string	s1 = "DEBUG";	
	std::string	s2 = "INFO";
	std::string	s3 = "WARNING";
	std::string	s4 = "ERROR";
	Harl		bebra;

	bebra.complain(s1);
	bebra.complain(s2);
	bebra.complain(s3);
	bebra.complain(s4);
}