/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:06:52 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/12 17:02:06 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "[ newZombie() ]" << std::endl;
	Zombie *abc = newZombie("abc");
	abc->announce();
	delete abc;

	std::cout << std::endl;

	std::cout << "[ randomChump() ]" << std::endl;
	randomChump("def");

	return (0);
}
