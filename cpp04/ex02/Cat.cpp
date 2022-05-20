/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 09:48:02 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 13:25:53 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() :
	AAnimal("Cat"), brain_(new Brain())
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat& rhs) :
	AAnimal(rhs), brain_(new Brain(*(rhs.brain_)))
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	AAnimal::operator=(rhs);
	*(brain_) = *(rhs.brain_);
	std::cout << "Cat copy assignment operator called." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete brain_;
}

void	Cat::makeSound() const
{
	std::cout << "meow!" << std::endl;
}

void	Cat::memorizeIdea(const int index, const std::string& idea)
{
	brain_->setIdea(index, idea);
}

std::string	Cat::remindIdea(const int index) const
{
	return (brain_->getIdea(index));
}
