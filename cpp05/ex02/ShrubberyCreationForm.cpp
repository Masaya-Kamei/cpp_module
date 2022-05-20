/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:59:40 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 16:19:25 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):
	Form("ShrubberyCreationForm", kGradeToSign_, kGradeToExecute_),
	target_(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs):
	Form(rhs), target_(rhs.target_)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	Form::operator=(rhs);
	target_ = rhs.target_;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string	ShrubberyCreationForm::getTarget() const { return (target_); };

void	ShrubberyCreationForm::action() const
{
	std::string		filename(target_ + "_shrubbery");
	std::ofstream	ofs(filename);

	if (!ofs)
		throw std::ofstream::failure("Fail to open " + filename);
	ofs << "         @@@@@@\n"
		<< "       @@@@@@@@@@\n"
		<< "     @@@@@@@@@@@@@@\n"
		<< "    @@@@@@@@@@@@@@@@\n"
		<< "   @@@@@@@@@@@@@@@@@@\n"
		<< " @@@@@@@@@@@@@@@@@@@@@@\n"
		<< "          ||||\n"
		<< "          ||||\n"
		<< std::flush;
}
