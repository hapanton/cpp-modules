/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:04:18 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/23 16:55:05 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_numberValue = 0;
}

Fixed::Fixed(Fixed const &instance){
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(instance.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &src){
	std::cout << "Copy assignment constructor called" << std::endl;
	if (&src != this)
		this->_numberValue = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_numberValue);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_numberValue = raw; //how can i change the static const value ?
}