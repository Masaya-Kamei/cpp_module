/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:21:51 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/19 19:39:38 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():
	x_(0), y_(0)
{
}

Point::Point(const Point& rhs):
	x_(rhs.x_), y_(rhs.y_)
{
}

Point::Point(const float x, const float y):
	x_(x), y_(y)
{
}

Point::~Point()
{
}

Point& Point::operator=(const Point& p)
{
	(void)p;
	return (*this);
}

Point	Point::operator-(const Point& p) const
{
	Point	result(x_.toFloat() - p.x_.toFloat(), y_.toFloat() - p.y_.toFloat());
	return (result);
}

Fixed	Point::get_x(void) const
{
	return (x_);
}

Fixed	Point::get_y(void) const
{
	return (y_);
}

std::ostream &operator<<(std::ostream &out, const Point &rhs)
{
	out << "(" << rhs.get_x() << ", " << rhs.get_y() << ")";
	return (out);
}
