/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:19:56 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/04 21:40:57 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScalarConverter.hpp"

/*
** isType
*/
bool	ScalarConverter::isChar	(std::string str){
	if(str.length() == 1 && std::isdigit(str[0]) == false)
		return (true);
	return (false);
}

bool	ScalarConverter::isInt	(std::string str){
	unsigned int	i = 0;
	if(str[0] == '-' || str[0] == '+')
		i++;
	while (std::isdigit(str[i]) == true)
		i++;
	if (i == str.length())
		return (true);
	return (false);
	
}

bool	ScalarConverter::isFloat(std::string str){
	unsigned int	i = 0;
	if(str[0] == '-' || str[0] == '+')
		i++;
	while (std::isdigit(str[i]) == true)
		i++;
	if (str[i] == '.')
		i++;
	while (std::isdigit(str[i]) == true)
		i++;
	if (str[i] == 'f' && i + 1 == str.length())
		return (true);
	return (false);
}

bool	ScalarConverter::isDouble(std::string str){
	unsigned int	i = 0;
	if(str[0] == '-' || str[0] == '+')
		i++;
	while (std::isdigit(str[i]) == true)
		i++;
	if (str[i] == '.')
		i++;
	while (std::isdigit(str[i]) == true)
		i++;
	if (i == str.length())
		return (true);
	return (false);
}

/*
** Conversion to type
*/
void	ScalarConverter::toChar(std::string input, std::string type){
	std::cout << "char: ";
	if (input == "nan" || input == "nanf"
			|| input == "inf" || input == "inff"
			|| input == "-inff" || input == "+inff"
			|| input == "+inf" || input == "-inf")
		std::cout << "Impossible" << std::endl;
	else if (type == "char")
		std::cout << input << std::endl;
	else {
		int num;
		std::string s = input;
		if (type == "float")
			s[input.length() - 1] = 0;
		if (type == "float" || type == "double")
			num = static_cast<int>(atof(s.c_str()));
		else
			num = atoi(input.c_str());
		if (num < 33 || num > 126)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << static_cast<char>(num) << std::endl;
	}
}

void	ScalarConverter::toInt(std::string input, std::string type){
	std::cout << "int: ";
	if (input == "nan" || input == "nanf"
			|| input == "inf" || input == "inff"
			|| input == "-inff" || input == "+inff"
			|| input == "+inf" || input == "-inf")
		std::cout << "Impossible" << std::endl;
	else if (type == "char")
		std::cout << static_cast<int>(input[0]) << std::endl;
	else if (type == "int")
		std::cout << input << std::endl;
	else{
		std::string	s = input;
		if (type == "float")
			s[input.length() - 1] = 0;
		std::cout << static_cast<int>(atof(s.c_str())) << std::endl;
	}		
}

void	ScalarConverter::toFloat(std::string input, std::string type){
	std::cout << "float: ";
	if (type == "char"){
		int num = static_cast<int>(input[0]);
		if (num < 33 || num >  126)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << num << ".0f" << std::endl;
	}
	else if (type == "int")
		std::cout << input + ".0f" << std::endl;
	else if (type == "float")
		std::cout << input << std::endl;
	else if (type == "double")
		std::cout << input + "f" << std::endl;
}

void	ScalarConverter::toDouble(std::string input, std::string type){
	std::cout << "double: ";
	if (type == "char"){
		int num = static_cast<int>(input[0]);
		if (num < 33 || num >  126)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << num << ".0" << std::endl;
	}
	else if (type == "int")
		std::cout << input + ".0" << std::endl;
	else if (type == "float"){
		std::string	s = input;
		s[input.length() - 1] = 0;
		std::cout << s << std::endl;
	}
	else if (type == "double")
		std::cout << input << std::endl;
}

void	ScalarConverter::convert(std::string input){
	std::string	type;
	if (isChar(input))
		type = "char";
	else if (isInt(input))
		type = "int";
	else if (isFloat(input) || input == "-inff"
		|| input == "+inff" || input == "nanf")
		type = "float";
	else if (isDouble(input) || input == "-inf"
		|| input == "+inf" || input == "nan")
		type = "double";
	else
		throw (InconvertibleException());
	toChar(input, type);
	toInt(input, type);
	toFloat(input, type);
	toDouble(input, type);
}