/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:42:01 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 13:46:30 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() :
	AMateria("cure")
{
}

Cure::Cure(const Cure& rhs) :
	AMateria(rhs)
{
}

Cure& Cure::operator=(const Cure& rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

Cure::~Cure()
{
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
