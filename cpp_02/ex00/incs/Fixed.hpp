/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:59:39 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/23 17:01:35 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# pragma once
# include <iostream>

class Fixed{
	private:
		int					_numberValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &instance);
		Fixed& operator=(const Fixed &src);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif