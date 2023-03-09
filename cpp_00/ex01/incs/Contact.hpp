/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:14:59 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 00:08:11 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>

bool is_digits(const std::string &str);

class Contact
{
	private:
		std::string _name;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int         _index;

		std::string _printLen(std::string str) const;
		std::string _getInput(std::string str) const;
		std::string _getNumber(std::string str) const;

	public:
		Contact();
		~Contact();
		void    init(void);
		void    setIndex(int i);
		void    show(int index) const;
		void    display(int index) const;
};

#endif
