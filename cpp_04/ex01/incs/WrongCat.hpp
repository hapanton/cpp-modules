/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:29:39 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 17:29:50 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongCAT_HPP
# define WRONGWrongCAT_HPP

# pragma once
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	protected:
	public:
		WrongCat();
		WrongCat(WrongCat& src);
		WrongCat& operator=(WrongCat& src);
		
		~WrongCat();

		void	makeSound() const;
};

#endif