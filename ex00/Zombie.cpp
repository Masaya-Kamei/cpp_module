/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:08:05 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/12 16:39:10 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie(std::string name) :
	name_(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << name_ << " Destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name_ << "  BraiiiiiiinnnzzzZ..." << std::endl;
}
