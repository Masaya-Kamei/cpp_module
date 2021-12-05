/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:18:17 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 11:28:45 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main()
{
	{
		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete(meta);
		delete(j);
		delete(i);
	}
	std::cout << std::endl;
	{
		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();

		delete(meta);
		delete(i);
	}
	return (0);
}
