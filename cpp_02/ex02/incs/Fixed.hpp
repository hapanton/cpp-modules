/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:59:39 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/23 22:07:31 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# pragma once
# include <iostream>
# include <cmath>

class Fixed{
	private:
		int					_numberValue;
		static const int	_fractionalBits = 8;;

	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float x);
		Fixed(const Fixed &instance);
		Fixed& operator =(const Fixed &src);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed &instance) const;
		bool	operator<(const Fixed &instance) const;
		bool	operator>=(const Fixed &instance) const;
		bool	operator<=(const Fixed &instance) const;
		bool	operator==(const Fixed &instance) const;
		bool	operator!=(const Fixed &instance) const;

		Fixed	operator+(const Fixed &instance) const;
		Fixed	operator-(const Fixed &instance) const;
		Fixed	operator*(const Fixed &instance) const;
		Fixed	operator/(const Fixed &instance) const;

		Fixed	operator++(int);
		Fixed&	operator++(void);
		Fixed	operator--(int);
		Fixed&	operator--(void);

		static	Fixed& min(Fixed& i1, Fixed& i2);
		static	const Fixed& min(const Fixed& i1, const Fixed& i2);
		static	Fixed& max(Fixed& i1, Fixed& i2);
		static	const Fixed& max(const Fixed& i1, const Fixed& i2);
};

std::ostream & operator<< (std::ostream & o, Fixed const &instance);

#endif