/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:42:06 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 19:34:17 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# pragma once
# include "AAnimal.hpp"

class Dog : public AAnimal{
	protected:
	public:
		Dog();
		Dog(Dog& src);
		Dog& operator=(Dog& src);
		~Dog();

		void	makeSound() const;
};

#endif