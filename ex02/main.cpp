/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:28:57 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/21 10:56:47 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clap_taro("clap_taro");
	ClapTrap	clap_hana("clap_hana");
	FragTrap	frag_taro("frag_taro");
	FragTrap	frag_hana("frag_hana");

	frag_taro.attack("frag_hana");
	frag_hana.takeDamage(30);
	frag_hana.beRepaired(10);

	frag_hana.attack("clap_taro");
	clap_taro.takeDamage(30);
	clap_taro.beRepaired(10);

	clap_hana.attack("frag_taro");
	frag_taro.takeDamage(10);
	frag_taro.beRepaired(5);

	frag_taro.highFivesGuys();
	// clap_taro.highFivesGuys();

	return (0);
}
