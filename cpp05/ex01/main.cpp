/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:36:21 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 15:00:26 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main()
{
	try
	{
		Form		f("F", 0, 10);
		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------" << std::endl;

	try
	{
		Bureaucrat	b("B", 1);
		std::cout << b << std::endl;
		Form		f("F", 20, 10);
		std::cout << f << std::endl;
		b.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------" << std::endl;

	try
	{
		Bureaucrat	b("B", 50);
		std::cout << b << std::endl;
		Form		f("F", 20, 10);
		std::cout << f << std::endl;
		b.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------" << std::endl;

	Form	f1("F1", 20, 10);
	Form	f2(f1);
	Form	f3;
	f3 = f2;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << f3 << std::endl;

	return (0);
}
