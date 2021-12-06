/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:52:39 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 16:48:22 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name):
	name_(name)
{
	for (int i = 0; i < kMateriaInventoryMax_; i++)
		materias_[i] = NULL;
}

Character::Character(const Character& rhs):
	name_(rhs.name_)
{
	for (int i = 0; i < kMateriaInventoryMax_; i++)
	{
		if (rhs.materias_[i])
			materias_[i] = rhs.materias_[i]->clone();
		else
			materias_[i] = NULL;
	}
}

Character&	Character::operator=(const Character& rhs)
{
	this->~Character();
	name_ = rhs.name_;
	for (int i = 0; i < kMateriaInventoryMax_; i++)
	{
		if (rhs.materias_[i])
			materias_[i] = rhs.materias_[i]->clone();
		else
			materias_[i] = NULL;
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < kMateriaInventoryMax_; i++)
	{
		if (materias_[i])
			delete materias_[i];
	}
}

std::string const& Character::getName() const
{
	return (name_);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < kMateriaInventoryMax_; i++)
	{
		if (materias_[i] == NULL)
		{
			materias_[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < kMateriaInventoryMax_ && materias_[idx])
		materias_[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < kMateriaInventoryMax_ && materias_[idx])
		materias_[idx]->use(target);
}
