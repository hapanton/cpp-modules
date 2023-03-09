/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:59:44 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 19:04:07 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

# pragma once
# include <iostream>

class Brain{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(Brain& src);
		Brain& operator=(Brain& src);
		~Brain();
};

#endif