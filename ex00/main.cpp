/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:28:57 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/20 14:46:04 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	taro("taro");
	ClapTrap	hanako("hanako");

	taro.attack("hanako");
	hanako.takeDamage(3);
	hanako.beRepaired(2);

	hanako.attack("taro");
	taro.takeDamage(10);
	taro.beRepaired(15);

	return (0);
}
