/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:56:57 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/09 18:16:18 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) :
	type_(type)
{
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType() const
{
	return (type_);
}

void	Weapon::setType(const std::string& type)
{
	type_ = type;
}
