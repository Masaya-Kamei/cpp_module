/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:16:45 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/13 16:47:46 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) :
	name_(name), Weapon_(0)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void) const
{
	std::cout << name_ << " attacks with his " << Weapon_->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	Weapon_ = &weapon;
}
