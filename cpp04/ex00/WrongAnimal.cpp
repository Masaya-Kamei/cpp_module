/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:54:32 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 12:24:12 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() :
	type_()
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs):
	type_(rhs.type_)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &rhs)
{
	type_ = rhs.type_;
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) :
	type_(type)
{
	std::cout << "WrongAnimal constructor with args called." << std::endl;
}

const std::string&	WrongAnimal::getType() const
{
	return (type_);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "......" << std::endl;
}
