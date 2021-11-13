/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:10:08 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/13 16:48:30 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) :
	name_(name), Weapon_(&weapon)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void) const
{
	std::cout << name_ << " attacks with his " << Weapon_->getType() << std::endl;
}

void	HumanA::setWeapon(Weapon& weapon)
{
	Weapon_ = &weapon;
}
