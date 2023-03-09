/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:36:32 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/19 21:44:46 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact     _contacts[8];
		int         _readInput(void) const;

	public:
		PhoneBook();
		~PhoneBook();
		void    addContact(void);
		void    printContacts(void) const;
		void    search(void) const;
};

#endif
