/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:40:44 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/14 13:54:12 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string& name) :
	ClapTrap(name)
{
	hit_points_ = 100;
	max_hit_points_ = hit_points_;
	energy_points_ = 50;
	attack_damage_ = 20;
	std::cout << "ScavTrap " << name_ << " constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) :
	ClapTrap(rhs)
{
	std::cout << "ScavTrap " << name_ << " copy constructor called." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	this->ClapTrap::operator=(rhs);
	std::cout << "ScavTrap " << name_
		<< " copy assignment operator called." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name_ << " destructor called." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (hit_points_ <= 0 || energy_points_ <= 0)
		return ;
	energy_points_ -= 1;
	std::cout << "ScavTrap " << name_ << " attack " << target
		<< ", causing " << attack_damage_ << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << name_
		<< " switches to Gate keeper mode." << std::endl;
}
