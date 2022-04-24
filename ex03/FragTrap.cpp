/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 09:53:03 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/25 08:23:46 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() :
	ClapTrap()
{
	hit_points_ = kHitPointsDefault_;
	max_hit_points_ = hit_points_;
	energy_points_ = kEnergyPointsDefault_;
	attack_damage_ = kAttackDamageDefault_;
	std::cout << "FragTrap " << name_ << " default constructor called." << std::endl;
}

FragTrap::FragTrap(const std::string& name) :
	ClapTrap(name)
{
	hit_points_ = kHitPointsDefault_;
	max_hit_points_ = hit_points_;
	energy_points_ = kEnergyPointsDefault_;
	attack_damage_ = kAttackDamageDefault_;
	std::cout << "FragTrap " << name_ << " constructor with args called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) :
	ClapTrap(rhs)
{
	std::cout << "FragTrap " << name_ << " copy constructor called." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	this->ClapTrap::operator=(rhs);
	std::cout << "FragTrap " << name_
		<< " copy assignment operator called." << std::endl;
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
