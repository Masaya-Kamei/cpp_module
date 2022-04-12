/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:16:45 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/12 12:49:42 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(const std::string& name) :
	name_(name), weapon_(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack() const
{
	if (weapon_ == NULL)
		return ;
	std::cout << name_ << " attacks with their " << weapon_->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	weapon_ = &weapon;
}
