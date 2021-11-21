/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:02:28 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/21 16:39:21 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name), ScavTrap(name), FragTrap(name), name_(name)
{
	ClapTrap::name_ = name + "_clap_name";
	hit_points_ = FragTrap::kHitPointsDefault_;
	max_hit_points_ = hit_points_;
	energy_points_ = ScavTrap::kEnergyPointsDefault_;
	attack_damage_ = FragTrap::kAttackDamageDefault_;
	std::cout << "DiamondTrap " << name_ << " constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& rhs) :
	ClapTrap(rhs.name_), ScavTrap(rhs.name_), FragTrap(rhs.name_), name_(rhs.name_)
{
	*this = rhs;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap& rhs)
{
	name_ = rhs.name_;
	this->ScavTrap::operator=(rhs);
	this->FragTrap::operator=(rhs);
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name_ << " destructor called." << std::endl;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My DiamondTrap name is " << name_
		<< ", and ClapTrap name is " << ClapTrap::name_ << "." << std::endl;
}
