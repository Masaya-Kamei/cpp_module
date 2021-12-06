/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:59:43 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 08:20:05 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() :
	type_()
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& rhs)
{
	*this = rhs;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	this->type_ = rhs.type_;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type_);
}

void	Animal::makeSound(void) const
{
	std::cout << "Grrrrrr!" << std::endl;
}
