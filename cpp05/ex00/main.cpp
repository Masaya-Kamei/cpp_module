/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:36:21 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 14:01:47 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat	a("a", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------" << std::endl;

	try
	{
		Bureaucrat	a("a", 200);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------" << std::endl;

	try
	{
		Bureaucrat	a("a", 1);
		std::cout << a << std::endl;
		std::cout << a.incGrade() << std::endl;
		std::cout << a.decGrade() << std::endl;
		std::cout << a.decGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------" << std::endl;

	try
	{
		Bureaucrat	a("a", 150);
		std::cout << a << std::endl;
		std::cout << a.decGrade() << std::endl;
		std::cout << a.incGrade() << std::endl;
		std::cout << a.incGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------" << std::endl;

	Bureaucrat	a("a", 150);
	Bureaucrat	b(a);
	Bureaucrat	c;
	c = b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return (0);
}
