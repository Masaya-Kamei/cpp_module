/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:21:00 by mkamei            #+#    #+#             */
/*   Updated: 2022/06/06 14:25:44 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template <typename T>
void	TestArrayFunc(Array<T>& a)
{
	try {
		for (size_t i = 0; i < a.size() + 1; i++)
			std::cout << a[i] << ", ";
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << a.size() << std::endl;
}

template <typename T>
void	TestArrayFunc(const Array<T>& a)
{
	try {
		for (size_t i = 0; i < a.size() + 1; i++)
			std::cout << a[i] << ", ";
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << a.size() << std::endl;
}

int		main()
{
	std::cout << "Test a" << std::endl;
	Array<int> a(3);
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	TestArrayFunc<int>(a);

	std::cout << "\nTest b" << std::endl;
	const Array<int> b(a);
	TestArrayFunc<int>(b);

	std::cout << "\nTest c" << std::endl;
	Array<int> c;
	c = a;
	c[0] = 5;
	TestArrayFunc<int>(c);

	std::cout << "\nTest a" << std::endl;
	TestArrayFunc<int>(a);

	std::cout << "\nTest d" << std::endl;
	Array<std::string> d(3);
	TestArrayFunc<std::string>(d);

	return (0);
}
