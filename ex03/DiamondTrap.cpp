/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:02:28 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/20 16:38:21 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(const std::string& name) :
	ClapTrap(name + "_clap_name"), ScavTrap(""), FragTrap(""), name_(name)
{
	hit_points_ = FragTrap::kHitPointsDefault_;
	max_hit_points_ = hit_points_;
	energy_points_ = ScavTrap::kEnergyPointsDefault_;
	attack_damage_ = FragTrap::kAttackDamageDefault_;
	std::cout << "DiamondTrap " << name_ << " constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) :
	ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs), name_(rhs.name_)
{
	std::cout << "DiamondTrap " << name_ << " copy constructor called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
{
	name_ = rhs.name_;
	this->ClapTrap::operator=(rhs);
	std::cout << "DiamondTrap " << name_
		<< " copy assignment operator called." << std::endl;
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

void	DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap name is " << name_
		<< ", and ClapTrap name is " << ClapTrap::name_ << "." << std::endl;
}
