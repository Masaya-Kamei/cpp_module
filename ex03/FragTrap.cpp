/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 09:53:03 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/21 15:45:14 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) :
	ClapTrap(name)
{
	hit_points_ = kHitPointsDefault_;
	max_hit_points_ = hit_points_;
	energy_points_ = kEnergyPointsDefault_;
	attack_damage_ = kAttackDamageDefault_;
	std::cout << "FragTrap " << name_ << " constructor called." << std::endl;
}

FragTrap::FragTrap(FragTrap& rhs) :
	ClapTrap(rhs.name_)
{
	*this = rhs;
}

FragTrap&	FragTrap::operator=(FragTrap& rhs)
{
	this->ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name_ << " destructor called." << std::endl;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << name_
		<< " is trying to high five guys." << std::endl;
}
