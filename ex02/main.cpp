/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:21:58 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/19 12:43:51 by mkamei           ###   ########.fr       */
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

	std::cout << "a=" << a << ", " << "b=" << b << "\n" << std::endl;
	std::cout << a << " > " << b << "\t\t= " << (a > b) << std::endl;
	std::cout << a << " < " << b << "\t\t= " << (a < b) << std::endl;
	std::cout << a << " >= " << b << "\t\t= " << (a >= b) << std::endl;
	std::cout << a << " <= " << b << "\t\t= " << (a <= b) << std::endl;
	std::cout << a << " == " << b << "\t\t= " << (a == b) << std::endl;
	std::cout << a << " != " << b << "\t\t= " << (a != b) << std::endl;
	std::cout << a << " + " << b << "\t\t= " << (a + b) << std::endl;
	std::cout << a << " - " << b << "\t\t= " << (a - b) << std::endl;
	std::cout << a << " * " << b << "\t\t= " << (a * b) << std::endl;
	std::cout << a << " / " << b << "\t\t= " << (a / b) << std::endl;
	std::cout << b << " / " << a << "\t\t= " << (b / a) << std::endl;
	std::cout << "-" << a << " - " << "+" << b << "\t\t= " << (-a - +b) << std::endl;
	std::cout << a++ << "++" << "\t\t\t= " << a << std::endl;
	std::cout << "++" << ++a << "\t\t= " << a << std::endl;
	std::cout << a-- << "--" << "\t\t= " << a << std::endl;
	std::cout << "--" << --a << "\t\t\t= " << a << std::endl;
	std::cout << "min(" << a << ", " << b << ")\t= " << Fixed::min(a, b) << std::endl;
	std::cout << "max(" << a << ", " << b << ")\t= " << Fixed::max(a, b) << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		original_test();
	else if (argv[1] == std::string("subject"))
		subject_test();
	else
		std::cout << "./a.out [subject]" << std::endl;
	return (0);
}
