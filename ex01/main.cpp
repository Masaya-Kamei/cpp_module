/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:47:54 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 09:47:34 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>


int	main(void)
{
	const int	kAnimalsNum = 10;
	Animal		*animals[kAnimalsNum];

	for (int i = 0; i < kAnimalsNum / 2; i++)
		animals[i] = new Cat();
	for (int i = kAnimalsNum / 2; i < kAnimalsNum; i++)
		animals[i] = new Dog();

	animals[0]->memorizeIdea(0, "I'm sleepy");
	animals[0]->memorizeIdea(1, "I'm hungry");

	std::cout << "\n[Init]" << std::endl;
	std::cout << "animals[0]	:" << animals[0]->remindIdea(0)
		<< ", " << animals[0]->remindIdea(1) << std::endl;
	std::cout << "animals[0]	:" << animals[1]->remindIdea(0)
		<< ", " << animals[1]->remindIdea(1) << std::endl;

	std::cout << "\n[Assignment]" << std::endl;
	*(animals[1]) = *(animals[0]);
	std::cout << "animals[0]	:" << animals[0]->remindIdea(0)
		<< ", " << animals[0]->remindIdea(1) << std::endl;
	std::cout << "animals[1]	:" << animals[1]->remindIdea(0)
		<< ", " << animals[1]->remindIdea(1) << std::endl;

	std::cout << "\n[Copy Constructor]" << std::endl;
	Cat	copy_cat(dynamic_cast<Cat&>(*animals[1]));
	animals[1]->memorizeIdea(0, "I'm bored");
	std::cout << "copy_cat	:" << copy_cat.remindIdea(0)
		<< ", " << copy_cat.remindIdea(1) << std::endl;
	std::cout << "animals[1]	:" << animals[1]->remindIdea(0)
		<< ", " << animals[1]->remindIdea(1) << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < kAnimalsNum; i++)
		delete animals[i];
	return (0);
}
