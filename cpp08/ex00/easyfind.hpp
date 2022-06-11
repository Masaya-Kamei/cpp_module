/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:16:10 by mkamei            #+#    #+#             */
/*   Updated: 2022/06/06 10:58:29 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	return (std::find(container.begin(), container.end(), value));
}

template <typename T>
typename T::const_iterator easyfind(const T& container, const int value)
{
	return (std::find(container.begin(), container.end(), value));
}

#endif
