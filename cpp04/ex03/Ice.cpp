/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:08:27 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 15:45:22 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() :
	AMateria("ice")
{
}

Ice::Ice(const Ice& rhs) :
	AMateria(rhs)
{
}

Ice& Ice::operator=(const Ice& rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

Ice::~Ice()
{
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
