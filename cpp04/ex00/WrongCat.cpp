/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:12:51 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/22 14:14:44 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() :
	WrongAnimal("Cat")
{
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& rhs) :
	WrongAnimal(rhs)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	WrongAnimal::operator=(rhs);
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "meow!" << std::endl;
}
