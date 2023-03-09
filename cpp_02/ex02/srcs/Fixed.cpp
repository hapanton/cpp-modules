/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:04:18 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/23 22:07:11 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

/*
** Constructors
*/

Fixed::Fixed(){
	// std::cout << "Default constructor called" << std::endl;
	this->_numberValue = 0;
}

Fixed::Fixed(const int n){
	// std::cout << "Integer constructor called" << std::endl;
	this->_numberValue = n << this->_fractionalBits;
}

Fixed::Fixed(const float x):_numberValue(roundf(x * (1 << _fractionalBits))){
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &instance){
	// std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed&	Fixed::operator=(const Fixed &src){
	// std::cout << "Copy assignment constructor called" << std::endl;
	if (&src != this)
		this->_numberValue = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}

/*
** Getters and setters
*/

int		Fixed::getRawBits(void) const{
	return (this->_numberValue);
}

void	Fixed::setRawBits(int const raw){
	this->_numberValue = raw;
}

/*
** Conversion functions
*/

float	Fixed::toFloat(void) const{
	return static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits );
}

int		Fixed::toInt(void) const{
	return (this->_numberValue >> this->_fractionalBits);
}

/*
** Output stream function
*/

std::ostream & operator<< (std::ostream & o, Fixed const &instance) {
	o << instance.toFloat();
	return (o);
}

/*
** Logical operators
*/

bool	Fixed::operator>(const Fixed &instance) const{
	return (this->getRawBits() > instance.getRawBits());
}

bool	Fixed::operator<(const Fixed &instance) const{
	return (this->getRawBits() < instance.getRawBits());
}

bool	Fixed::operator>=(const Fixed &instance) const{
	return (this->getRawBits() >= instance.getRawBits());
}

bool	Fixed::operator<=(const Fixed &instance) const{
	return (this->getRawBits() <= instance.getRawBits());
}

bool	Fixed::operator==(const Fixed &instance) const{
	return (this->getRawBits() == instance.getRawBits());
}

bool	Fixed::operator!=(const Fixed &instance) const{
	return (this->getRawBits() != instance.getRawBits());
}

/*
** Arithmetic operators
*/

Fixed	Fixed::operator+(const Fixed &instance) const{
	return Fixed(this->toFloat() + instance.toFloat());
}

Fixed	Fixed::operator-(const Fixed &instance) const{
	return Fixed(this->toFloat() - instance.toFloat());
}

Fixed	Fixed::operator*(const Fixed &instance) const{
	return Fixed(this->toFloat() * instance.toFloat());
}

Fixed	Fixed::operator/(const Fixed &instance) const{
	return Fixed(this->toFloat() / instance.toFloat());
}

/*
** Incrementation and decrementation
*/

Fixed	Fixed::operator++(int){
	Fixed	tmp = Fixed(*this);
	
	tmp._numberValue = this->_numberValue++;
	return (tmp);
}

Fixed&	Fixed::operator++(void){
	++this->_numberValue;
	return (*this);
}

Fixed	Fixed::operator--(int){
	Fixed	tmp = Fixed(*this);
	
	tmp._numberValue = this->_numberValue--;
	return (tmp);
}

Fixed&	Fixed::operator--(void){
	--this->_numberValue;
	return (*this);
}

/*
** MIN MAX functions
*/

Fixed& Fixed::min(Fixed &i1, Fixed &i2){
	return((i1.getRawBits() < i2.getRawBits()) ? i1 : i2);
}

const Fixed& Fixed::min(const Fixed &i1, const Fixed &i2){
	return((i1.getRawBits() < i2.getRawBits()) ? i1 : i2);
}

Fixed& Fixed::max(Fixed &i1, Fixed &i2){
	return((i1.getRawBits() > i2.getRawBits()) ? i1 : i2);
}

const Fixed& Fixed::max(const Fixed &i1, const Fixed &i2){
	return((i1.getRawBits() > i2.getRawBits()) ? i1 : i2);
}