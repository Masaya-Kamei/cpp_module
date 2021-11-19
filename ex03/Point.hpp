/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:16:33 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/19 19:43:38 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
public:

	Point();
	Point(const Point& rhs);
	Point(const float x, const float y);
	~Point();

	Point&	operator=(const Point& p);
	Point	operator-(const Point& p) const;

	Fixed	get_x(void) const;
	Fixed	get_y(void) const;

private:

	Fixed const	x_;
	Fixed const	y_;
};

std::ostream &operator<<(std::ostream &out, const Point &rhs);

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
