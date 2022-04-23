/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:47:54 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 13:23:39 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	AAnimal	*a1 = new Cat();
	AAnimal	*a2 = new Dog();

	// AAnimal	*a3 = new AAnimal();
	// AAnimal	animal;

	std::cout << std::endl;

	delete a1;
	delete a2;
	return (0);
}
