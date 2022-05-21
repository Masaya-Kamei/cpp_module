/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:06:44 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 16:19:05 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
	Form("RobotomyRequestForm", kGradeToSign_, kGradeToExecute_),
	target_(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs):
	Form(rhs), target_(rhs.target_)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	Form::operator=(rhs);
	target_ = rhs.target_;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string	RobotomyRequestForm::getTarget() const { return (target_); };

void RobotomyRequestForm::action() const
{
	std::srand(time(NULL));
	if (std::rand() % 2 == 0)
		std::cout << target_ << " has been robotomized successfully." << std::endl;
	else
		std::cout << target_ << " failed to robotomize." << std::endl;
}
