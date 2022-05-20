/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:54:51 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/22 14:13:17 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() :
	Animal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog& rhs) :
	Animal(rhs)
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	Animal::operator=(rhs);
	std::cout << "Dog copy assignment operator called." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Bow wow!" << std::endl;
}
