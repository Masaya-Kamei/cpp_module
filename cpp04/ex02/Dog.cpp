/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:54:51 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 13:26:44 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() :
	AAnimal("Dog"), brain_(new Brain())
{
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog& rhs) :
	AAnimal(rhs), brain_(new Brain(*(rhs.brain_)))
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	AAnimal::operator=(rhs);
	*(brain_) = *(rhs.brain_);
	std::cout << "Dog copy assignment operator called." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete brain_;
}

void	Dog::makeSound() const
{
	std::cout << "Bow wow!" << std::endl;
}

void	Dog::memorizeIdea(const int index, const std::string& idea)
{
	brain_->setIdea(index, idea);
}

std::string	Dog::remindIdea(const int index) const
{
	return (brain_->getIdea(index));
}
