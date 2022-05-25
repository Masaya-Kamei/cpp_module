/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:52:24 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/25 15:17:23 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <vector>
#include <deque>

template <class T, class Container>
void	TestMutantStack(MutantStack<T, Container> s)
{
	typename MutantStack<T, Container>::iterator itr;
	for (itr = s.begin(); itr != s.end(); ++itr)
		std::cout << *itr << std::endl;

	typename MutantStack<T, Container>::const_iterator citr1 = s.begin();
	std::cout << "begin\t:" << *citr1 << std::endl;
	typename MutantStack<T, Container>::const_reverse_iterator citr2 = s.rbegin();
	std::cout << "rbegin\t:" << *citr2 << std::endl;
	std::cout << "top\t\t:" << s.top() << std::endl;
	std::cout << "size\t:" << s.size() << std::endl;
	std::cout << std::endl;
}

int		main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	MutantStack<int, std::vector<int> > s1(vec);
	s1.push(4);
	s1.push(5);
	s1.push(6);
	TestMutantStack(s1);

	MutantStack<int, std::vector<int> > s2(s1);
	TestMutantStack(s2);

	MutantStack<int, std::vector<int> > s3;
	s3 = s2;
	TestMutantStack(s3);


	std::deque<int> deq;
	deq.push_back(42);
	deq.push_back(8);
	deq.push_back(1);
	MutantStack<int, std::deque<int> > s4(deq);
	s4.push(4);
	s4.push(9);
	s4.push(12);
	TestMutantStack(s4);

	return (0);
}
