/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:45:40 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/20 23:31:23 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PhoneBook.hpp"
#include <ios>
#include <limits>

int	main(void){
	PhoneBook	book;
	std::string input;
	bool	working = true;

	while (working)
	{
		std::cout << "Input command: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (input.compare("ADD") == 0)
			book.addContact();
		else if (input.compare("SEARCH") == 0)
		{
			book.printContacts();
			book.search();
		}
		else if (input.compare("EXIT") == 0)
			working  = false;
		else if (input.empty())
			continue ;
		else
			std::cout << "WRONG COMMAND. TRY AGAIN." << std::endl;
	}
	exit(0);
}