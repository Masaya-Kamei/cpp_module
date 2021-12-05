/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:12:51 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 11:42:48 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() :
	WrongAnimal()
{
	std::cout << "WrongCat constructor called." << std::endl;
	type = "Cat";
}

WrongCat::WrongCat(const WrongCat& rhs)
{
	*this = rhs;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	this->type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "meow!" << std::endl;
}
