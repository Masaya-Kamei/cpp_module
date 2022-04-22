/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 09:48:02 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/22 14:13:46 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() :
	Animal("Cat")
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat& rhs):
	Animal(rhs)
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	Animal::operator=(rhs);
	std::cout << "Cat copy assignment operator called." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "meow!" << std::endl;
}
