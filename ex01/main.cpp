/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:06:52 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/13 13:30:57 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

static void	AllZombiesAnnounce(const Zombie* const zombies, const int zombie_num)
{
	for (int i = 0; i < zombie_num; i++)
	{
		zombies[i].announce();
	}
}

int	main(void)
{
	std::cout << "[ zombieHorde() ]" << std::endl;
	const int	zombie_num = 10;
	Zombie	*taros = zombieHorde(zombie_num, "taro");
	AllZombiesAnnounce(taros, zombie_num);
	delete [] taros;

	return (0);
}
