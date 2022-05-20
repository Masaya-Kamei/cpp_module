/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:47:54 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 11:40:56 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>


int	main(void)
{
	const int	kAnimalsNum = 4;
	Animal		*a[kAnimalsNum];

	for (int i = 0; i < kAnimalsNum / 2; i++)
		a[i] = new Cat();
	for (int i = kAnimalsNum / 2; i < kAnimalsNum; i++)
		a[i] = new Dog();

	a[0]->memorizeIdea(0, "sleepy");
	a[0]->memorizeIdea(1, "hungry");
	a[2]->memorizeIdea(0, "hungry");
	a[2]->memorizeIdea(1, "sleepy");

	std::cout << "\n[Assignment]" << std::endl;
	static_cast<Cat&>(*(a[1])) = static_cast<Cat&>(*(a[0]));
	std::cout << "a[0] :" << a[0]->remindIdea(0) << ", " << a[0]->remindIdea(1) << std::endl;
	std::cout << "a[1] :" << a[1]->remindIdea(0) << ", " << a[1]->remindIdea(1) << std::endl;

	std::cout << "\n[Copy Constructor]" << std::endl;
	delete a[3];
	a[3] = new Dog(static_cast<Dog&>(*a[2]));
	std::cout << "a[2] :" << a[2]->remindIdea(0) << ", " << a[2]->remindIdea(1) << std::endl;
	std::cout << "a[3] :" << a[3]->remindIdea(0) << ", " << a[3]->remindIdea(1) << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < kAnimalsNum; i++)
		delete a[i];
	return (0);
}
