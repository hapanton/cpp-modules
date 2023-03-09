/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:04:18 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/23 19:42:30 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_numberValue = 0;
}

Fixed::Fixed(const int n){
	std::cout << "Integer constructor called" << std::endl;
	this->_numberValue = n << this->_fractionalBits;
}

Fixed::Fixed(const float x):_numberValue(roundf(x * (1 << _fractionalBits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &instance){
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed&	Fixed::operator=(const Fixed &src){
	std::cout << "Copy assignment constructor called" << std::endl;
	if (&src != this)
		this->_numberValue = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const{
	return (this->_numberValue);
}

void	Fixed::setRawBits(int const raw){
	this->_numberValue = raw;
}

float	Fixed::toFloat(void) const{
	return static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits );
}

int		Fixed::toInt(void) const{
	return (this->_numberValue >> this->_fractionalBits);
}

std::ostream & operator<< (std::ostream & o, Fixed const &instance) {
	o << instance.toFloat();
	return (o);
}