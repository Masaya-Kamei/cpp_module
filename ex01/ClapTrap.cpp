/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:41:12 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/25 08:17:38 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() :
	name_(), hit_points_(10), max_hit_points_(hit_points_),
	energy_points_(10), attack_damage_(0)
{
	std::cout << "CrapTrap " << name_ << " default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) :
	name_(name), hit_points_(10), max_hit_points_(hit_points_),
	energy_points_(10), attack_damage_(0)
{
	std::cout << "CrapTrap " << name_ << " constructor with args called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs) :
	name_(rhs.name_), hit_points_(rhs.hit_points_),
	max_hit_points_(rhs.max_hit_points_), energy_points_(rhs.energy_points_),
	attack_damage_(rhs.attack_damage_)
{
	std::cout << "CrapTrap " << name_ << " copy constructor called." << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	name_ = rhs.name_;
	hit_points_ = rhs.hit_points_;
	max_hit_points_ = rhs.max_hit_points_;
	energy_points_ = rhs.energy_points_;
	attack_damage_ = rhs.attack_damage_;
	std::cout << "CrapTrap " << name_
		<< " copy assignment operator called." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "CrapTrap " << name_ << " destructor called." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (hit_points_ <= 0 || energy_points_ <= 0)
		return ;
	energy_points_ -= 1;
	std::cout << "ClapTrap " << name_ << " attack " << target
		<< ", causing " << attack_damage_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points_ <= 0)
		return ;
	hit_points_ -= amount;
	std::cout << "ClapTrap " << name_ << " took " << amount << " damage, so ";
	if (hit_points_ <= 0)
	{
		hit_points_ = 0;
		std::cout << name_ << " is dying!" << std::endl;
	}
	else
		std::cout << name_ << "'s HP is " << hit_points_ << "." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points_ <= 0 || energy_points_ <= 0)
		return ;
	energy_points_ -= 1;
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
