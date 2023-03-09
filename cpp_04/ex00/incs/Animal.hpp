/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:51:28 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 18:43:51 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# pragma once
# include <iostream>

class AAnimal{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal& src);
		AAnimal& operator=(AAnimal& src);

		virtual	~AAnimal();

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif