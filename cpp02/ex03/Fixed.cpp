/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:24:16 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/11 12:30:26 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const static bool	msg_flag = false;

Fixed::Fixed() :
	fixed_point_value_(0)
{
	if (msg_flag)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	if (msg_flag)
		std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& rhs)
{
	if (msg_flag)
		std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	if (msg_flag)
		std::cout << "Copy assignment operator called" << std::endl;
	fixed_point_value_ = rhs.fixed_point_value_;
	return (*this);
}

Fixed::Fixed(const int n)
{
	fixed_point_value_ = n << fractional_bits_num_;
}

Fixed::Fixed(const float f)
{
	fixed_point_value_ = (int)(roundf(f * (1 << fractional_bits_num_)));
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return (fixed_point_value_ > rhs.fixed_point_value_);
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return (fixed_point_value_ < rhs.fixed_point_value_);
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return (fixed_point_value_ >= rhs.fixed_point_value_);
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return (fixed_point_value_ <= rhs.fixed_point_value_);
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (fixed_point_value_ == rhs.fixed_point_value_);
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return (fixed_point_value_ != rhs.fixed_point_value_);
}

const Fixed	Fixed::operator+(const Fixed& rhs) const
{
	Fixed	result;

	result.fixed_point_value_ = fixed_point_value_ + rhs.fixed_point_value_;
	return (result);
}

const Fixed	Fixed::operator-(const Fixed& rhs) const
{
	Fixed	result;

	result.fixed_point_value_ = fixed_point_value_ - rhs.fixed_point_value_;
	return (result);
}

const Fixed	Fixed::operator*(const Fixed& rhs) const
{
	Fixed		result;
	const long	l = (long)fixed_point_value_ * rhs.fixed_point_value_;

	if (l < 0)
		result.fixed_point_value_ = -(-l >> fractional_bits_num_);
	else
		result.fixed_point_value_ = l >> fractional_bits_num_;
	return (result);
}

const Fixed	Fixed::operator/(const Fixed& rhs) const
{
	Fixed		result;
	const long	l = (long)fixed_point_value_ << fractional_bits_num_;

	result.fixed_point_value_ = l / rhs.fixed_point_value_;
	return (result);
}

const Fixed& Fixed::operator+() const
{
	return (*this);
}

const Fixed Fixed::operator-() const
{
	Fixed	tmp;

	tmp.fixed_point_value_ = -fixed_point_value_;
	return (tmp);
}

const Fixed&	Fixed::operator++()
{
	fixed_point_value_++;
	return (*this);
}

const Fixed	Fixed::operator++(int)
{
	const Fixed	tmp = *this;

	fixed_point_value_++;
	return (tmp);
}

const Fixed&	Fixed::operator--()
{
	fixed_point_value_--;
	return (*this);
}

const Fixed	Fixed::operator--(int)
{
	const Fixed	tmp = *this;

	fixed_point_value_--;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	return ((f1.fixed_point_value_ < f2.fixed_point_value_) ? f1 : f2);
}

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	return ((f1.fixed_point_value_ < f2.fixed_point_value_) ? f1 : f2);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	return ((f1.fixed_point_value_ > f2.fixed_point_value_) ? f1 : f2);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	return ((f1.fixed_point_value_ > f2.fixed_point_value_) ? f1 : f2);
}

int	Fixed::getRawBits(void) const
{
	if (msg_flag)
		std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_value_);
}

void	Fixed::setRawBits(int const fixed_point_value)
{
	if (msg_flag)
		std::cout << "setRawBits member function called" << std::endl;
	fixed_point_value_ = fixed_point_value;
}

float Fixed::toFloat(void) const
{
	return ((float)fixed_point_value_ / (1 << fractional_bits_num_));
}

int	Fixed::toInt(void) const
{
	return (fixed_point_value_ >> fractional_bits_num_);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& rhs)
{
	out << rhs.toFloat();
	return (out);
}
