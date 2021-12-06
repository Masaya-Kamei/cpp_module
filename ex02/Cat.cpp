/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 09:48:02 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 09:38:06 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() :
	Animal(), brain_(new Brain())
{
	std::cout << "Cat constructor called." << std::endl;
	type_ = "Cat";
}

Cat::Cat(const Cat& rhs) :
	Animal(rhs), brain_(new Brain(*(rhs.brain_)))
{
}

Cat&	Cat::operator=(const Cat& rhs)
{
	type_ = rhs.type_;
	*(brain_) = *(rhs.brain_);
	return (*this);
}

Animal&	Cat::operator=(const Animal& rhs)
{
	type_ = rhs.getType();
	*(brain_) = *(rhs.getBrain());
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete brain_;
}

Brain*	Cat::getBrain(void) const
{
	return (this->brain_);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow!" << std::endl;
}

void	Cat::memorizeIdea(const int index, std::string idea)
{
	brain_->setIdea(index, idea);
}

std::string	Cat::remindIdea(const int index) const
{
	return (brain_->getIdea(index));
}
