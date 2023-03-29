/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:55:30 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/22 17:37:36 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"

void    Harl::_debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::_info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::_warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void    Harl::_error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl(){
	std::cout << "Harl appears." << std::endl;
}

Harl::~Harl(){
	std::cout << "Harl goes away." << std::endl;
}

void    Harl::complain( std::string level ){
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_func  funcs[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int i = -1;
	
	while (++i < 4)
		if (levels[i].compare(level) == 0)
			break ;
	if (i != 4){
		(this->*funcs[i])();
	}
}