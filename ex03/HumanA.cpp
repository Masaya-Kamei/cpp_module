/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:10:08 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/09 09:56:45 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon& weapon) :
	name_(name), weapon_(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{
	std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon& weapon)
{
	weapon_ = weapon;
}
