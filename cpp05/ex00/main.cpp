/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:36:21 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/28 13:11:22 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	try
	{
		Bureaucrat	b1("b1", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------" << std::endl;

	try
	{
		Bureaucrat	b1("b1", 200);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------" << std::endl;

	try
	{
		Bureaucrat	b1("b1", 1);
		std::cout << b1 << std::endl;
		std::cout << b1.decGrade() << std::endl;
		std::cout << b1.incGrade() << std::endl;
		std::cout << b1.incGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------" << std::endl;

	try
	{
		Bureaucrat	b1("b1", 150);
		std::cout << b1 << std::endl;
		std::cout << b1.incGrade() << std::endl;
		std::cout << b1.decGrade() << std::endl;
		std::cout << b1.decGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------" << std::endl;

	Bureaucrat	b1("b1", 150);
	Bureaucrat	b2(b1);
	Bureaucrat	b3;
	b3 = b2;
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;

	return (0);
}
