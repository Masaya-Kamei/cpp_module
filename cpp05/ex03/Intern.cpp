/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:15:25 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/23 15:49:45 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& rhs)
{
	(void)rhs;
}

Intern&	Intern::operator=(const Intern& rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern()
{
}

static Form* newShrubberyCreationForm(const std::string& target)
{ return (new ShrubberyCreationForm(target)); }

static Form* newRobotomyRequestForm(const std::string& target)
{ return (new RobotomyRequestForm(target)); }

static Form* newPresidentialPardonForm(const std::string& target)
{ return (new PresidentialPardonForm(target)); }

Form* Intern::makeForm(const std::string& form_name, const std::string& target) const
{
	const int	kFormNum = 3;
	const std::string	form_names[kFormNum] = {
		"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (* const newforms[kFormNum])(const std::string& target) = {
		newShrubberyCreationForm,
		newRobotomyRequestForm, newPresidentialPardonForm };

	for (int i = 0; i < kFormNum; i++)
	{
		if (form_names[i] == form_name)
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return (newforms[i](target));
		}
	}
	throw Intern::UnknownFormNameException();
	return (NULL);
}
