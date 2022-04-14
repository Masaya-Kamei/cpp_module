/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:28:57 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/14 14:57:31 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	clap_a("clap_a");
	ClapTrap	clap_b("clap_b");
	FragTrap	frag_a("frag_a");
	FragTrap	frag_b("frag_b");

	std::cout << std::endl;

	frag_a.attack("frag_b");
	frag_b.takeDamage(30);
	frag_b.beRepaired(20);

	std::cout << std::endl;

	FragTrap	frag_b_copy(frag_b);
	FragTrap	frag_b_assign("");
	frag_b_assign = frag_b;
	frag_b_copy.beRepaired(1);
	frag_b_assign.beRepaired(1);

	std::cout << std::endl;

	clap_a.attack("frag_a");
	frag_a.takeDamage(10);
	frag_a.beRepaired(5);

	std::cout << std::endl;

	frag_a.highFivesGuys();
	// clap_a.highFivesGuys();

	std::cout << std::endl;

	return (0);
}
