/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:06:52 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/09 09:23:10 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "[ newZombie() ]" << std::endl;
	Zombie *a = newZombie("a");
	a->announce();
	delete a;

	std::cout << std::endl;

	std::cout << "[ randomChump() ]" << std::endl;
	randomChump("b");

	return (0);
}
