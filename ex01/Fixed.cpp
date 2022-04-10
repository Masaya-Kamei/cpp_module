/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:24:16 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/10 12:54:13 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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
	fixed_point_value_ = rhs.fixed_point_value_;
	return (*this);
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point_value_ = n << fractional_bits_num_;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point_value_ = (int)(roundf(f * (1 << fractional_bits_num_)));
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

float Fixed::toFloat(void) const
{
	return ((float)fixed_point_value_ / (1 << fractional_bits_num_));
}

int	Fixed::toInt(void) const
{
	return (fixed_point_value_ >> fractional_bits_num_);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
