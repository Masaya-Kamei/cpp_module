/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:28:57 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/14 14:30:30 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	a("a");
	ClapTrap	b("b");

	std::cout << std::endl;

	a.attack("b");
	b.takeDamage(3);
	b.beRepaired(1);

	std::cout << std::endl;

	ClapTrap	b_copy(b);
	ClapTrap	b_assign("");
	b_assign = b;
	b_copy.beRepaired(1);
	b_assign.beRepaired(1);

	std::cout << std::endl;

	a.attack("b");
	b.takeDamage(8);
	b.beRepaired(10);

	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
		a.beRepaired(1);
	a.attack("b");

	std::cout << std::endl;

	return (0);
}
