/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:21:51 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/11 12:40:13 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():
	x_(0), y_(0)
{
}

Point::~Point()
{
}

Point::Point(const Point& rhs):
	x_(rhs.x_), y_(rhs.y_)
{
}

Point& Point::operator=(const Point& p)
{
	(void)p;
	return (*this);
}

Point::Point(const float x, const float y):
	x_(x), y_(y)
{
}

Point	Point::operator-(const Point& p) const
{
	return (Point(x_.toFloat() - p.x_.toFloat(), y_.toFloat() - p.y_.toFloat()));
}

Fixed	Point::getX(void) const
{
	return (x_);
}

Fixed	Point::getY(void) const
{
	return (y_);
}

std::ostream&	operator<<(std::ostream& out, const Point& rhs)
{
	out << "(" << rhs.getX() << ", " << rhs.getY() << ")";
	return (out);
}
