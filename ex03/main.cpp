/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:28:57 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/20 11:27:02 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	DiamondTrap	diamond_a("diamond_a");
	DiamondTrap	diamond_b("diamond_b");

	std::cout << std::endl;

	diamond_a.attack("diamond_b");
	diamond_b.takeDamage(30);
	diamond_b.beRepaired(10);

	std::cout << std::endl;

	DiamondTrap	diamond_b_copy(diamond_b);
	DiamondTrap	diamond_b_assign("");
	diamond_b_assign = diamond_b;
	diamond_b_copy.beRepaired(10);
	diamond_b_assign.beRepaired(10);
	diamond_b_copy.whoAmI();
	diamond_b_assign.whoAmI();

	std::cout << std::endl;

	diamond_b.attack("diamond_a");
	diamond_a.takeDamage(30);
	diamond_a.beRepaired(40);

	std::cout << std::endl;

	diamond_a.whoAmI();
	diamond_b.whoAmI();

	std::cout << std::endl;

	return (0);
}
