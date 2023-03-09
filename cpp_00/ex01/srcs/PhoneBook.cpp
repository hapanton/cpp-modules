/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:40:00 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/20 23:32:47 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PhoneBook.hpp"
#include <cstdio>
#include <sstream>

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::addContact(void)
{
	static int	i = 0;

	this->_contacts[i % 8].init();
	this->_contacts[i % 8].setIndex(i % 8);
	i++;
}

void    PhoneBook::printContacts(void) const
{
	std::cout << "----------------- CONTACTS ------------------" << std::endl;
	for (size_t i = 0; i < 8; i++) {
        this->_contacts[i].show(i);
    }
	std::cout << "---------------------------------------------" << std::endl;
}

void    PhoneBook::search(void) const
{
	std::string			input;
	int					index;
	std::stringstream	ss;

	std::cout << "Input index: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	if (input.empty())
		return (this->search());
	else if (is_digits(input) == false)
	{
		std::cout << "Only numbers are allowed. Try again." << std::endl;
		return (this->search());
	}
	ss << input;
	ss >> index;
	if ((int)index > -1 && (int)index < 9)
	{
		this->_contacts[index].display(index);
		return ;
	}
	else
	{
		std::cout << "Incorrect index. Try again." << std::endl;
		return (this->search());
	}
}