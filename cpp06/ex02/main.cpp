/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:16:33 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/22 18:13:11 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base	*generate()
{
	static bool init = true;

	if (init)
	{
    	std::srand(std::time(NULL));
		init = false;
	}
	switch (std::rand() % 3) {
	case 0:
		std::cout << "A";
		return (new A());
	case 1:
		std::cout << "B";
		return (new B());
	case 2:
		std::cout << "C";
		return (new C());
	}
	return (NULL);
}

void	identify(Base* p)
{
	A* const pa = dynamic_cast<A*>(p);
	if (pa != NULL) {
		std::cout << "A";
		return ;
	}
	B* const pb = dynamic_cast<B*>(p);
	if (pb != NULL) {
		std::cout << "B";
		return ;
    }
	C* const pc = dynamic_cast<C*>(p);
	if (pc != NULL) {
		std::cout << "C";
		return ;
	}
}

void	identify(Base& p)
{
	try {
		A&	pa = dynamic_cast<A&>(p);
		(void)pa;
		std::cout << "A";
		return ;
	}
	catch (const std::bad_cast&) {}
	try {
		B&	pb = dynamic_cast<B&>(p);
		(void)pb;
		std::cout << "B";
		return ;
	}
	catch (const std::bad_cast&) {}
	try {
		C&	pc = dynamic_cast<C&>(p);
		(void)pc;
		std::cout << "C";
		return ;
	}
	catch (const std::bad_cast&) {}
}

int	main()
{
	for (int i = 0; i < 5; i++)
	{
		Base *b = generate();
		std::cout << ", ";
		identify(b);
		std::cout << ", ";
		identify(*b);
		std::cout << std::endl;
	}
	return (0);
}
