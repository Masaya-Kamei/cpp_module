/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:25:43 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/12 08:52:22 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	CrossProduct(Point const p, Point const q)
{
	return (p.getX() * q.getY() - p.getY() * q.getX());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	f0, f1, f2;

	f0 = CrossProduct(b - a, point - a);
	f1 = CrossProduct(c - b, point - b);
	f2 = CrossProduct(a - c, point - c);

	return ((f0 > 0 && f1 > 0 && f2 > 0) || (f0 < 0 && f1 < 0 && f2 < 0));
}
