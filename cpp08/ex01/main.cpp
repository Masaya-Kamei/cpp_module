/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:44:41 by mkamei            #+#    #+#             */
/*   Updated: 2022/06/06 11:05:27 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <vector>
#include "Span.hpp"
#include <iostream>

int	main()
{
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;

	Span sp = Span(10000);

	try {
		sp.shortestSpan();
	} catch (const std::exception& e) { std::cout << e.what() << std::endl; }
	try {
		sp.longestSpan();
	} catch (const std::exception& e) { std::cout << e.what() << std::endl; }

	int	nums[] = {6, 3, 17, 9, 11};
	for (unsigned int i = 0; i < 2000; i++)
	{
		for (unsigned int j = 0; j < 5; j++)
			nums[j] += 1;
		sp.rangeAddNumber(nums, nums + 5);
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try {
		sp.addNumber(42);
	} catch (const std::exception& e) { std::cout << e.what() << std::endl; }

	return (0);
}
