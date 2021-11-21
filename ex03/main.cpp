/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:28:57 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/21 16:36:11 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamond_taro("diamond_taro");
	DiamondTrap	diamond_hana("diamond_hana");

	diamond_taro.attack("diamond_hana");
	diamond_hana.takeDamage(30);
	diamond_hana.beRepaired(10);

	diamond_hana.ClapTrap::attack("diamond_taro");
	diamond_taro.takeDamage(30);
	diamond_taro.beRepaired(40);

	diamond_taro.whoAmI();

	return (0);
}
