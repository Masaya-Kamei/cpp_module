/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:28:57 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/14 14:27:11 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	clap_a("clap_a");
	ClapTrap	clap_b("clap_b");
	ScavTrap	scav_a("scav_a");
	ScavTrap	scav_b("scav_b");

	std::cout << std::endl;

	scav_a.attack("scav_b");
	scav_b.takeDamage(20);
	scav_b.beRepaired(10);

	std::cout << std::endl;

	ScavTrap	scav_b_copy(scav_b);
	ScavTrap	scav_b_assign("");
	scav_b_assign = scav_b;
	scav_b_copy.beRepaired(1);
	scav_b_assign.beRepaired(1);

	std::cout << std::endl;

	clap_a.attack("scav_a");
	scav_a.takeDamage(10);
	scav_a.beRepaired(5);

	std::cout << std::endl;

	scav_a.guardGate();
	// clap_a.guardGate();

	std::cout << std::endl;

	return (0);
}
