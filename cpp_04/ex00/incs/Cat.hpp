/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:41:56 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 19:34:17 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# pragma once
# include "AAnimal.hpp"

class Cat : public AAnimal{
	protected:
	public:
		Cat();
		Cat(Cat& src);
		Cat& operator=(Cat& src);
		
		~Cat();

		void	makeSound() const;
};

#endif