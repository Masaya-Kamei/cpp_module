/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:06:52 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/01 12:24:09 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "[ zombieHorde() ]" << std::endl;
	const int	zombie_num = 10;
	Zombie	*zombies = zombieHorde(zombie_num, "a");
	for (int i = 0; i < zombie_num; i++)
	{
		zombies[i].announce();
	}
	delete [] zombies;

	return (0);
}
