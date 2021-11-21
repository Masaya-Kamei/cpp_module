/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:40:44 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/21 15:47:39 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string name) :
	ClapTrap(name)
{
	hit_points_ = kHitPointsDefault_;
	max_hit_points_ = hit_points_;
	energy_points_ = kEnergyPointsDefault_;
	attack_damage_ = kAttackDamageDefault_;
	std::cout << "ScavTrap " << name_ << " constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) :
	ClapTrap(rhs.name_)
{
	*this = rhs;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &rhs)
{
	this->ClapTrap::operator=(rhs);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name_ << " destructor called." << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << name_
		<< " switches to Gate keeper mode." << std::endl;
}
