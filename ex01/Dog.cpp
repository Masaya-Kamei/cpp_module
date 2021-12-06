/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:54:51 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 08:51:16 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() :
	Animal(), brain_(new Brain())
{
	std::cout << "Dog constructor called." << std::endl;
	type_ = "Dog";
}

Dog::Dog(const Dog& rhs)
{
	*this = rhs;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	type_ = rhs.type_;
	*(brain_) = *(rhs.brain_);
	return (*this);
}

Animal&	Dog::operator=(const Animal& rhs)
{
	type_ = rhs.getType();
	*(brain_) = *(rhs.getBrain());
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete brain_;
}

Brain*	Dog::getBrain(void) const
{
	return (this->brain_);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bow wow!" << std::endl;
}

void	Dog::memorizeIdea(const int index, std::string idea)
{
	brain_->setIdea(index, idea);
}

std::string	Dog::remindIdea(const int index) const
{
	return (brain_->getIdea(index));
}
