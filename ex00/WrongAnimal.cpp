/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:54:32 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 11:43:26 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() :
	type()
{
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	*this = rhs;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Grrrrrr!" << std::endl;
}
