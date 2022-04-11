/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:25:43 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/11 17:43:37 by mkamei           ###   ########.fr       */
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

	f0 = CrossProduct(a - b, a - point);
	f1 = CrossProduct(b - c, b - point);
	f2 = CrossProduct(c - a, c - point);

	return ((f0 > 0 && f1 > 0 && f2 > 0) || (f0 < 0 && f1 < 0 && f2 < 0));
}
