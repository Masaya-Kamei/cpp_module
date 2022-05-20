/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:22:36 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/30 10:55:54 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "utils.hpp"
#include <iostream>
#include <string>

static void	PutUsage(void)
{
	std::cout
		<< "This is phonebook program." << '\n'
		<< '\n'
		<< "[Command list]" << '\n'
		<< "ADD, SEARCH, EXIT" << '\n'
		<< '\n'
		<< "[Contact fields]" << '\n'
		<< "first name, last name, nickname, phone number, darkest secret" << '\n'
		<< std::endl;
}

int	main(void)
{
	std::string	line;
	Phonebook	phonebook;
	t_status	status;

	PutUsage();
	status = SUCCESS;
	while (status == SUCCESS && ReadLine(">", line) == SUCCESS)
	{
		StrToUpper(line);
		if (line == "ADD")
			status = phonebook.AddContact();
		else if (line == "SEARCH")
			status = phonebook.SearchContact();
		else if (line == "EXIT")
			break ;
		else
			std::cerr << "Unknown Command." << std::endl;
	}
	std::cout << "Exit" << std::endl;
	return (0);
}
