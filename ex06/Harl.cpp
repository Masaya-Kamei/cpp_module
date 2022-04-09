/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:22:15 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/21 15:34:19 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	const std::string	emsg("[ Probably complaining about insignificant problems ]");
	const std::string	level_strs_[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					i;

	for (i = 0; i < 4; i++)
	{
		if (level_strs_[i] == level)
			break ;
	}
	switch (i)
	{
		case 0:
			debug();
			std::cout << std::endl;
		case 1:
			info();
			std::cout << std::endl;
		case 2:
			warning();
			std::cout << std::endl;
		case 3:
			error();
			break ;
		default:
			std::cout << emsg << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout
		<< "[ DEBUG ]\n"
		<< "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
		<< "I really do!"
		<< std::endl;
}

void	Harl::info(void)
{
	std::cout
		<< "[ INFO ]\n"
		<< "I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! If you did, "
		<< "I wouldn’t be asking for more!"
		<< std::endl;
}

void	Harl::warning(void)
{
	std::cout
		<< "[ WARNING ]\n"
		<< "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started working here "
		<< "since last month."
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout
		<< "[ ERROR ]\n"
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}
