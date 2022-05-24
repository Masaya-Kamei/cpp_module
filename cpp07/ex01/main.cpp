/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:55:27 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/23 13:16:55 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T>
void	print(const T& x ) { std::cout << x << std::endl; }

int	main()
{
	int	a[] = {1, 2, 3, 4, 5};
	iter(a, sizeof(a)/sizeof(a[0]), print);

	std::string	s[] = {"a", "b", "c", "d", "e"};
	iter(s, sizeof(s)/sizeof(s[0]), print);

	return (0);
}
