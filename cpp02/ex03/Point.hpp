/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:16:33 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/11 12:39:49 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
public:

	Point();
	~Point();
	Point(const Point& rhs);
	Point&	operator=(const Point& p);

	Point(const float x, const float y);
	Point	operator-(const Point& p) const;

	Fixed	getX() const;
	Fixed	getY() const;

private:

	Fixed const	x_;
	Fixed const	y_;
};

std::ostream&	operator<<(std::ostream& out, const Point& rhs);

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
