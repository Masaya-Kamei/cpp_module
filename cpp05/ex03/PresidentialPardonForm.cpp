/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 08:59:10 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 16:18:46 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):
	Form("PresidentialPardonForm", kGradeToSign_, kGradeToExecute_),
	target_(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs):
	Form(rhs), target_(rhs.target_)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	Form::operator=(rhs);
	target_ = rhs.target_;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string	PresidentialPardonForm::getTarget() const { return (target_); };

void	PresidentialPardonForm::action() const
{
	std::cout << target_ << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
