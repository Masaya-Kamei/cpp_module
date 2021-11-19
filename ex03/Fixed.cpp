/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:15:58 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/19 15:59:11 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::fractional_bits_num_ = 8;

Fixed::Fixed() :
	fixed_point_value_(0)
{
}

Fixed::Fixed(const Fixed& rhs)
{
	*this = rhs;
}

Fixed::Fixed(const int n)
{
	fixed_point_value_ = n << fractional_bits_num_;
}

Fixed::Fixed(const float f)
{
	fixed_point_value_ = (int)(roundf(f * (1 << fractional_bits_num_)));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	fixed_point_value_ = rhs.fixed_point_value_;
	return (*this);
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
	Fixed	result;

	result.fixed_point_value_
		= (fixed_point_value_ * rhs.fixed_point_value_) >> fractional_bits_num_;
	return (result);
}

const Fixed	Fixed::operator/(const Fixed& rhs) const
{
	Fixed	result;

	result.fixed_point_value_
		= (fixed_point_value_ << fractional_bits_num_) / rhs.fixed_point_value_;
	return (result);
}

const Fixed Fixed::operator+(void) const
{
	return (*this);
}

const Fixed Fixed::operator-(void) const
{
	Fixed	tmp;

	tmp.fixed_point_value_ = -fixed_point_value_;
	return (tmp);
}

const Fixed	Fixed::operator++()
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

const Fixed	Fixed::operator--()
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

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	return ((f1.fixed_point_value_ < f2.fixed_point_value_) ? f1 : f2);
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	return ((f1.fixed_point_value_ < f2.fixed_point_value_) ? f1 : f2);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	return ((f1.fixed_point_value_ > f2.fixed_point_value_) ? f1 : f2);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	return ((f1.fixed_point_value_ > f2.fixed_point_value_) ? f1 : f2);
}

int	Fixed::getRawBits(void) const
{
	return (fixed_point_value_);
}

void	Fixed::setRawBits(int const fixed_point_value)
{
	fixed_point_value_ = fixed_point_value;
}

float Fixed::toFloat(void) const
{
	return ((float)fixed_point_value_ / (float)(1 << fractional_bits_num_));
}

int	Fixed::toInt(void) const
{
	return (fixed_point_value_ >> fractional_bits_num_);
}

std::ostream &operator<<(std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();
	return (out);
}
