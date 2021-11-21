/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:41:12 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/21 15:44:19 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string name) :
	name_(name), hit_points_(kHitPointsDefault_), max_hit_points_(hit_points_),
	energy_points_(kEnergyPointsDefault_), attack_damage_(kAttackDamageDefault_)
{
	std::cout << "CrapTrap " << name_ << " constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
{
	*this = rhs;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	name_ = rhs.name_;
	hit_points_ = rhs.hit_points_;
	energy_points_ = rhs.energy_points_;
	attack_damage_ = rhs.attack_damage_;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "CrapTrap " << name_ << " destructor called." << std::endl;
}

void	ClapTrap::attack(std::string const& target)
{
	energy_points_ -= 0;
	std::cout << "ClapTrap " << name_ << " attack " << target
		<< ", causing " << attack_damage_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	hit_points_ -= amount;
	std::cout << "ClapTrap " << name_ << " took " << amount << " damage, so ";
	if (hit_points_ <= 0)
	{
		hit_points_ = 0;
		std::cout << name_ << " is dyning!" << std::endl;
	}
	else
		std::cout << name_ << "'s HP is " << hit_points_ << "." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	hit_points_ += amount;
	std::cout << "ClapTrap " << name_ << " is repaired " << amount << ", so ";
	if (hit_points_ >= max_hit_points_)
	{
		hit_points_ = max_hit_points_;
		std::cout << name_ << " is full " << hit_points_ << " HP." << std::endl;
	}
	else
		std::cout << name_ << "'s HP is " << hit_points_ << "." << std::endl;
}
