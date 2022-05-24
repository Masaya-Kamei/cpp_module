/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:24:06 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/24 13:36:57 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <set>

template <typename T>
void	Test_easyfind(T container, const int value)
{
	std::cout << "Find " << value << " from [";
	typename T::iterator end = container.end();
	for (typename T::iterator itr = container.begin(); itr != end; ++itr)
		std::cout << *itr << ", ";
	std::cout << "]   -> ";

	typename T::iterator ret = easyfind(container, value);
	if (ret == container.end())
		std::cout << "Not found." << std::endl;
	else
		std::cout << *ret << std::endl;
}

int	main()
{
	std::cout << "vector" <<std::endl;
	std::vector<int>	vec;
	for (int i = 0; i < 3; ++i)
		vec.push_back(i);
	Test_easyfind(vec, 1);
	Test_easyfind(vec, 2);
	Test_easyfind(vec, 3);
	Test_easyfind(vec, 4);

	std::cout << "\nlist" <<std::endl;
	std::list<int>	lst;
	for (int i = 0; i < 3; ++i)
		lst.push_back(i);
	Test_easyfind(lst, 1);
	Test_easyfind(lst, 2);
	Test_easyfind(lst, 3);
	Test_easyfind(lst, 4);

	std::cout << "\nset" <<std::endl;
	std::set<int>	set;
	for (int i = 2; i >= 0; --i)
		set.insert(i);
	Test_easyfind(set, 1);
	Test_easyfind(set, 2);
	Test_easyfind(set, 3);
	Test_easyfind(set, 4);

	return (0);
}
