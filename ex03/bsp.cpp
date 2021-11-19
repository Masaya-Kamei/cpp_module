/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:25:43 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/19 20:02:27 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	CrossProduct(Point const p, Point const q)
{
	return (p.get_x() * q.get_y() - p.get_y() * q.get_x());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool	b1, b2, b3;

	b1 = CrossProduct(point - a, b - a) < 0;
	b2 = CrossProduct(point - b, c - b) < 0;
	b3 = CrossProduct(point - c, a - c) < 0;

	return (b1 == b2 && b2 == b3);
}
