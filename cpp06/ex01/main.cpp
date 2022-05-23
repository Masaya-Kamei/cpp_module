/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:49:34 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/22 17:09:49 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	std::cout << std::boolalpha;

	Data	d1(42, "Hello");
	Data	*d1_ptr = deserialize(serialize(&d1));
	std::cout << (&d1 == d1_ptr && d1 == *d1_ptr) << std::endl;

	Data	d2(-1, "");
	Data	*d2_ptr = deserialize(serialize(&d2));
	std::cout << (&d2 == d2_ptr && d2 == *d2_ptr) << std::endl;

	return (0);
}
