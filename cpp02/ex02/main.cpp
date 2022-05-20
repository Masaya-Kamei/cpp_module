/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:21:58 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/11 12:20:13 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

static void	subject_test(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
}

static void	original_test(void)
{
	Fixed		a(6.25f);
	Fixed		b(42);

	std::cout << a << " > " << b << "\t= " << (a > b) << std::endl;
	std::cout << a << " < " << b << "\t= " << (a < b) << std::endl;
	std::cout << a << " >= " << b << "\t= " << (a >= b) << std::endl;
	std::cout << a << " <= " << b << "\t= " << (a <= b) << std::endl;
	std::cout << a << " == " << b << "\t= " << (a == b) << std::endl;
	std::cout << a << " != " << b << "\t= " << (a != b) << std::endl;
	std::cout << a << " + " << b << "\t= " << (a + b) << std::endl;
	std::cout << a << " - " << b << "\t= " << (a - b) << std::endl;
	std::cout << a << " * " << b << "\t= " << (a * b) << std::endl;
	std::cout << -a << " * " << b << "\t= " << (-a * b) << std::endl;
	std::cout << a << " / " << b << "\t= " << (a / b) << std::endl;
	std::cout << b << " / " << -a << "\t= " << (b / -a) << std::endl;
	std::cout << "-" << a << " - " << "+" << b << "\t= " << (-a - +b) << std::endl;
	std::cout << a << "++" << "\t\t= " << a++ << std::endl;
	std::cout << "++" << a << "\t= " << ++a << std::endl;
	std::cout << a << "--" << "\t= " << a-- << std::endl;
	std::cout << "--" << a << "\t= " << --a << std::endl;
	std::cout << "min(" << a << ", " << b << ")\t= " << Fixed::min(a, b) << std::endl;
	std::cout << "max(" << a << ", " << b << ")\t= " << Fixed::max(a, b) << std::endl;

	Fixed	c(8388607);
	Fixed	d(1);
	std::cout << c << " * " << d << "\t= " << (c * d) << std::endl;
	std::cout << c << " / " << d << "\t= " << (c / d) << std::endl;

	Fixed	e(0.3f);
	Fixed	f(1.1f);
	std::cout << e << " * " << f << "  = " << (e * f) << std::endl;
	std::cout << e << " * " << -f << " = " << (e * -f) << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		original_test();
	else if (argv[1] == std::string("subject"))
		subject_test();
	else
		std::cout << "Usage: ./fixed [subject]" << std::endl;
	return (0);
}
