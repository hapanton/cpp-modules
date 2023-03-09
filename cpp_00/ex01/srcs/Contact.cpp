/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:15:52 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/20 23:49:11 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

bool is_digits(const std::string &str)
{
    return str.find_first_not_of("-+0123456789") == std::string::npos;
}

std::string	Contact::_getInput(std::string str) const
{
	std::string input;

	std::cout << str;
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	if (input.empty())
		return (this->_getInput(str));
	return (input);
}

std::string	Contact::_getNumber(std::string str) const
{
	std::string			input;

	std::cout << str;
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	else if (is_digits(input) == false)
	{
		std::cout << "Only numbers are allowed. Try again." << std::endl;
		return (this->_getNumber(str));
	}
	if (input.empty())
		return (this->_getNumber(str));
	return (input);
}

void	Contact::init(void)
{
	this->_name = this->_getInput("Name: ");
	this->_lastName = this->_getInput("Last name: ");
	this->_nickname = this->_getInput("Nickname: ");
	this->_phoneNumber = this->_getNumber("Phone number: ");
	this->_darkestSecret = this->_getInput("Darkest secret: ");
	std::cout << "Contact created." << std::endl << std::endl;
	return;
}

void    Contact::setIndex(int i)
{
	this->_index = i;
	return ;
}

std::string Contact::_printLen(std::string str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::show(int index) const {
    if (this->_name.empty() || this->_lastName.empty() || this->_nickname.empty())
        return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_nickname) << std::flush;
    std::cout << "|" << std::endl;
}

void    Contact::display(int index) const
{
	if (this->_name.empty() || this->_lastName.empty() || this->_nickname.empty())
    {
		std::cout << "CONTACT EMPTY" << std::endl;
		return ;
	}
    std::cout << std::endl;
    std::cout << "------ CONTACT #" << index << " -------" << std::endl;
    std::cout << "First Name:\t" << this->_name << std::endl;
    std::cout << "Last Name:\t" << this->_lastName << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
	std::cout << "Phone number:\t" << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret:\t" << this->_darkestSecret << std::endl;
	std::cout << "-------------------------" << std::endl;
    std::cout << std::endl;
}