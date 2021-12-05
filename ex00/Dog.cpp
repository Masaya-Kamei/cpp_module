/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:54:51 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 11:42:08 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() :
	Animal()
{
	std::cout << "Dog constructor called." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& rhs)
{
	*this = rhs;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	this->type = rhs.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bow wow!" << std::endl;
}
