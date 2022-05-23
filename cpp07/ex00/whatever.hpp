/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:34:07 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/23 12:48:02 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T& a, T&b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(const T& a, const T& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T	max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
