/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:08:05 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/09 18:14:30 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string& name) :
	name_(name)
{
}

Zombie::~Zombie()
{
	std::cout << name_ << " died." << std::endl;
}

void	Zombie::announce() const
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
