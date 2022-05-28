/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:36:21 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/23 15:50:26 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

static void	execute_all_form(Bureaucrat& bureaucrat)
{
	const int			kFormNum = 3;
	const std::string	form_names[kFormNum] = {
		"shrubbery creation", "robotomy request", "presidential pardon"};
	const std::string	target("t1");
	Intern				intern;
	Form				*f;

	for (int i = 0; i < kFormNum; i++)
	{
		f = intern.makeForm(form_names[i], target);
		std::cout << *f << std::endl;
		bureaucrat.signForm(*f);
		bureaucrat.executeForm(*f);
		delete f;
		std::cout << std::endl;
	}
}

int	main(void)
{
	try
	{
		Bureaucrat	b1("b1", 1);
		std::cout << b1 << "\n" << std::endl;
		execute_all_form(b1);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------------------------------------" << std::endl;

	try
	{
		Bureaucrat	b1("b1", 60);
		std::cout << b1 << "\n" << std::endl;
		execute_all_form(b1);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------------------------------------" << std::endl;

	try
	{
		Intern	intern;
		intern.makeForm("aaaaaa", "t1");
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
