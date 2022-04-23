/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:41:11 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 15:10:32 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :
	materias_()
{
	for (int i = 0; i < kMateriasMax_; i++)
		materias_[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& rhs) :
	materias_()
{
	for (int i = 0; i < kMateriasMax_; i++)
	{
		if (rhs.materias_[i])
			materias_[i] = rhs.materias_[i]->clone();
		else
			materias_[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs)
{
	this->~MateriaSource();
	for (int i = 0; i < kMateriasMax_; i++)
	{
		if (rhs.materias_[i])
			materias_[i] = rhs.materias_[i]->clone();
		else
			materias_[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < kMateriasMax_; i++)
	{
		if (materias_[i])
			delete materias_[i];
	}
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < kMateriasMax_; i++)
	{
		if (materias_[i] == NULL)
		{
			materias_[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < kMateriasMax_; i++)
	{
		if (materias_[i] && materias_[i]->getType() == type)
			return (materias_[i]->clone());
	}
	return (NULL);
}
