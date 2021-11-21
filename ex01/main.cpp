/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:28:57 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/21 09:46:20 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap_taro("clap_taro");
	ClapTrap	clap_hana("clap_hana");
	ScavTrap	scav_taro("scav_taro");
	ScavTrap	scav_hana("scav_hana");

	scav_taro.attack("scav_hana");
	scav_hana.takeDamage(20);
	scav_hana.beRepaired(10);

	scav_hana.attack("clap_taro");
	clap_taro.takeDamage(20);
	clap_taro.beRepaired(10);

	clap_hana.attack("scav_taro");
	scav_taro.takeDamage(10);
	scav_taro.beRepaired(5);

	scav_taro.guardGate();
	// clap_taro.guardGate();

	return (0);
}
