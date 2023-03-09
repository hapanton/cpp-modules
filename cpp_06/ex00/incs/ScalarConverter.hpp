/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:32:48 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/02 18:17:08 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cmath>

#pragma once

class ScalarConverter{
	private:
		static bool	isChar(std::string str);
		static bool	isInt(std::string str);
		static bool	isFloat(std::string str);
		static bool	isDouble(std::string str);

		static void	toChar(std::string input, std::string type);
		static void	toInt(std::string input, std::string type);
		static void	toFloat(std::string input, std::string type);
		static void	toDouble(std::string input, std::string type);


	public:
		static void	convert(std::string s);

		class InconvertibleException : public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Exception inconvertible");
				}
		};
};

std::ostream& operator<<(std::ostream& o, const ScalarConverter& src);

#endif