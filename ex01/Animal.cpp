/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:59:43 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/22 12:54:57 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() :
	type_()
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal& rhs) :
	type_(rhs.type_)
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	type_ = rhs.type_;
	std::cout << "Animal copy assignment operator called." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(const std::string& type) :
	type_(type)
{
	std::cout << "Animal constructor with args called." << std::endl;
}

const std::string&	Animal::getType() const
{
	return (type_);
}

void	Animal::makeSound() const
{
	std::cout << "Grrrrrr!" << std::endl;
}
