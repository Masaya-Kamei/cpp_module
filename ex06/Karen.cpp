/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:22:15 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/21 15:39:03 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::complain(std::string level)
{
	const std::string	level_strings_[4]
		= {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level_strings_[i] == level)
		{
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
			}
			return ;
		}
	}
	std::cout
		<< "[ Probably complaining about insignificant problems ]"
		<< std::endl;
}

void	Karen::debug(void)
{
	std::cout
		<< "[ DEBUG ]\n"
		<< "I love to get extra bacon for "
		<< "my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!"
		<< std::endl;
}

void	Karen::info(void)
{
	std::cout
		<< "[ INFO ]\n"
		<< "I cannot believe adding extra "
		<< "bacon cost more money. You don’t put enough! "
		<< "If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::warning(void)
{
	std::cout
		<< "[ WARNING ]\n"
		<< "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and you just started "
		<< "working here last month."
		<< std::endl;
}

void	Karen::error(void)
{
	std::cout
		<< "[ ERROR ]\n"
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}
