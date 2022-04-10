/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:34:21 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/26 13:44:08 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int	main(void)
{
	Point	a(8.1, 1.2);
	Point	b(5.1, 6.4);
	Point	c(0, 3.5);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	std::cout << std::endl;

	Point	p1(5.0, 4.2);
	std::cout << p1 << " -> " << bsp(a, b, c, p1) << std::endl;
	Point	p2(0, 2.2);
	std::cout << p2 << " -> " << bsp(a, b, c, p2) << std::endl;
	Point	p3(3.1, 5.2);
	std::cout << p3 << " -> " << bsp(a, b, c, p3) << std::endl;

	std::cout << a << " -> " << bsp(a, b, c, a) << std::endl;

	return (0);
}
