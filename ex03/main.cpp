/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:26:39 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/07 08:52:56 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria*	tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);


	Character	copy_me(dynamic_cast<Character&>(*me));
	Character	assign_me("assign");
	assign_me = dynamic_cast<Character&>(*me);

	me->unequip(1);
	std::cout << me->getName() << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << copy_me.getName() << std::endl;
	copy_me.use(0, *bob);
	copy_me.use(1, *bob);
	std::cout << assign_me.getName() << std::endl;
	assign_me.use(0, *bob);
	assign_me.use(1, *bob);


	delete bob;
	delete me;
	delete src;

	return (0);
}
