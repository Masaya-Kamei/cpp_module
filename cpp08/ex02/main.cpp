/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:52:24 by mkamei            #+#    #+#             */
/*   Updated: 2022/06/11 13:08:32 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <iomanip>

template <class T, class Container>
void	TestMutantStack(MutantStack<T, Container>& s)
{
	typename MutantStack<T, Container>::iterator itr;
	for (itr = s.begin(); itr != s.end(); ++itr)
		std::cout << *itr << std::endl;

	typename MutantStack<T, Container>::iterator citr1 = s.begin();
	std::cout << std::setw(8) << "begin: " << *citr1 << std::endl;
	typename MutantStack<T, Container>::reverse_iterator citr2 = s.rbegin();
	std::cout << std::setw(8) << "rbegin: " << *citr2 << std::endl;
	std::cout << std::setw(8) << "top: " << s.top() << std::endl;
	std::cout << std::setw(8) << "size: " << s.size() << std::endl;
	std::cout << std::endl;
}

template <class T, class Container>
void	TestMutantStack(const MutantStack<T, Container>& s)
{
	typename MutantStack<T, Container>::const_iterator itr;
	for (itr = s.begin(); itr != s.end(); ++itr)
		std::cout << *itr << std::endl;

	typename MutantStack<T, Container>::const_iterator citr1 = s.begin();
	std::cout << std::setw(14) << "const begin: " << *citr1 << std::endl;
	typename MutantStack<T, Container>::const_reverse_iterator citr2 = s.rbegin();
	std::cout << std::setw(14) << "const rbegin: " << *citr2 << std::endl;
	std::cout << std::setw(14) << "top: " << s.top() << std::endl;
	std::cout << std::setw(14) << "size: " << s.size() << std::endl;
	std::cout << std::endl;
}

int		main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;

	{
		std::list<int> lst;
		lst.push_back(5);
		lst.push_back(17);
		std::cout << lst.back() << std::endl;
		lst.pop_back();
		std::cout << lst.size() << std::endl;
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		lst.push_back(0);
		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int, std::list<int> > s(lst);
	}
	std::cout << std::endl;

	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	MutantStack<int, std::vector<int> > s1(vec);
	s1.push(4);
	s1.push(5);
	s1.push(6);
	TestMutantStack(s1);

	const MutantStack<int, std::vector<int> > s2(s1);
	TestMutantStack(s2);

	MutantStack<int, std::vector<int> > s3;
	s3 = s2;
	TestMutantStack(s3);

	return (0);
}
