/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:22:15 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/15 11:46:55 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

const std::string	Karen::level_strings[4]
	= {"DEBUG", "INFO", "WARNING", "ERROR"};
void	(*Karen::level_funcs[4])(void)
	= {Karen::debug, Karen::info, Karen::warning, Karen::info};

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level_strings[i] == level)
			level_funcs[i]();
	}
}

void	Karen::debug(void)
{
	std::cout
		<< "I love to get extra bacon for "
		<< "my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!"
		<< std::endl;
}

void	Karen::info(void)
{
	std::cout
		<< "I cannot believe adding extra "
		<< "bacon cost more money. You don’t put enough! "
		<< "If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::warning(void)
{
	std::cout
		<< "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and you just started "
		<< "working here last month."
		<< std::endl;
}

void	Karen::error(void)
{
	std::cout
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}
