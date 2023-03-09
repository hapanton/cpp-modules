/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:40:14 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/24 22:55:55 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap " << name << " was born (Default)" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &src){
	*this = src;
	std::cout << "ClapTrap was copied" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src){
	
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructed" << std::endl;
}
