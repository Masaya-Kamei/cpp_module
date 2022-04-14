/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:28:57 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/14 13:08:02 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("a");
	ClapTrap	b("b");

	a.attack("b");
	b.takeDamage(3);
	b.beRepaired(2);

	a.attack("b");
	b.takeDamage(15);
	b.beRepaired(10);

	for (int i = 0; i < 8; i++)
		a.beRepaired(1);
	a.attack("b");

	return (0);
}
