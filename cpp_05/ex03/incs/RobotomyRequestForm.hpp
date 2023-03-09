/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:04:14 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/31 23:03:47 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#pragma once
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(RobotomyRequestForm &src);
		~RobotomyRequestForm();

		void				execute(const Bureaucrat &executor) const;
		const std::string	getTarget(void) const;

	private:
		const std::string _target;
};

#endif