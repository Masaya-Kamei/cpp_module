/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:55:45 by mkamei            #+#    #+#             */
/*   Updated: 2022/06/06 13:41:50 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template <typename T>
void	iter(T* arr, const size_t len, void (* const f)(T&))
{
	if (arr == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void	iter(const T* arr, const size_t len, void (* const f)(const T&))
{
	if (arr == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif
