/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:36:21 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/23 15:46:09 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

static void	execute_all_form(Bureaucrat& bureaucrat)
{
	const int	kFormNum = 3;
	ShrubberyCreationForm	sf("t1");
	RobotomyRequestForm		rf("t2");
	PresidentialPardonForm	pf("t3");
	Form*	forms[] = {&sf, &rf, &pf};

	for (int i = 0; i < kFormNum; i++)
	{
		std::cout << *forms[i] << std::endl;
		bureaucrat.signForm(*forms[i]);
		bureaucrat.executeForm(*forms[i]);
		std::cout << std::endl;
	}
}

int	main()
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

	ShrubberyCreationForm	sf1("t1");
	ShrubberyCreationForm	sf2(sf1);
	ShrubberyCreationForm	sf3;
	sf3 = sf2;
	std::cout << sf1 << ", target is " << sf1.getTarget() << std::endl;
	std::cout << sf2 << ", target is " << sf2.getTarget() << std::endl;
	std::cout << sf3 << ", target is " << sf3.getTarget() << std::endl;

	return (0);
}
