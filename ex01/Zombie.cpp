/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:08:05 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/01 12:43:02 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie():
	name_("")
{
}

Zombie::Zombie(const std::string &name) :
	name_(name)
{
}

Zombie::~Zombie()
{
	std::cout << name_ << " died." << std::endl;
}

void	Zombie::setName(const std::string &name)
{
	name_ = name;
}

void	Zombie::announce() const
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
