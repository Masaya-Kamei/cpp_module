/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:25:43 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/11 15:02:51 by mkamei           ###   ########.fr       */
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

	f0 = CrossProduct(a - point, a - b);
	f1 = CrossProduct(b - point, b - c);
	f2 = CrossProduct(c - point, c - a);

	return ((f0 > 0 && f1 > 0 && f2 > 0) || (f0 < 0 && f1 < 0 && f2 < 0));
}
