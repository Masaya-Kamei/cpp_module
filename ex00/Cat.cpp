/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 09:48:02 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 11:41:40 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() :
	Animal()
{
	std::cout << "Cat constructor called." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& rhs)
{
	*this = rhs;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	this->type = rhs.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "meow!" << std::endl;
}
