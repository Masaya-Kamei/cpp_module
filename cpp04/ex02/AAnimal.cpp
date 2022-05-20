/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:59:43 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 13:22:21 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() :
	type_()
{
	std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& rhs) :
	type_(rhs.type_)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& rhs)
{
	type_ = rhs.type_;
	std::cout << "AAnimal copy assignment operator called." << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
}

AAnimal::AAnimal(const std::string& type) :
	type_(type)
{
	std::cout << "AAnimal constructor with args called." << std::endl;
}

const std::string&	AAnimal::getType() const
{
	return (type_);
}
