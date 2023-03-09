/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:18:30 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/04 22:23:04 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#pragma once

class Base{
	public:
		virtual ~Base(){
		}
};

class A : public Base{
};

class B : public Base{
};

class C : public Base{
};

#endif