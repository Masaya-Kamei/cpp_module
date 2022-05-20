/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:05:33 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/10 10:54:31 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() :
	fixed_point_value_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point_value_ = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_value_);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point_value_ = raw;
}
