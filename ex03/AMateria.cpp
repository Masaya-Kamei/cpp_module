/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:33:44 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 13:43:53 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria():
	type_()
{
}

AMateria::AMateria(std::string const &type):
	type_(type)
{
}

AMateria::AMateria(const AMateria& rhs) :
	type_(rhs.type_)
{
}

AMateria&	AMateria::operator=(const AMateria& rhs)
{
	type_ = rhs.type_;
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const& AMateria::getType() const
{
	return (type_);
}
