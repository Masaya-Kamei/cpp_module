/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:34:21 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/11 15:51:14 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int	main(void)
{
	Point	a(8.1, 1.2);
	Point	b(5.5, 6.5);
	Point	c(0, 1.0);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	std::cout << std::endl;

	Point	p1(5.0, 4.2);
	std::cout << p1 << "\t\t-> " << bsp(a, b, c, p1) << std::endl;
	Point	p2(3, 2.2);
	std::cout << p2 << "\t\t-> " << bsp(a, b, c, p2) << std::endl;
	Point	p3(3.1, 6.2);
	std::cout << p3 << "\t-> " << bsp(a, b, c, p3) << std::endl;
	Point	p4(2.25, 3.25);
	std::cout << p4 << "\t\t-> " << bsp(a, b, c, p4) << std::endl;

	std::cout << a << "\t-> " << bsp(a, b, c, a) << std::endl;

	return (0);
}
