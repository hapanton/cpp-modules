/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:28:55 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 17:33:11 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WrongWRONGANIMAL_H
# define WrongWRONGANIMAL_H

# pragma once
# include <iostream>

class WrongAnimal{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal& src);
		WrongAnimal& operator=(WrongAnimal& src);

		virtual	~WrongAnimal();

		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif