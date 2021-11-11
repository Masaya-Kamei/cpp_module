/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:22:36 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/11 11:57:45 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
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

	PutUsage();
	while (GetWord(">", line))
	{
		StrToUpper(line);
		if (line == "ADD")
			phonebook.AddContact();
		else if (line == "SEARCH")
			phonebook.SearchContact();
		else if (line == "EXIT")
			break ;
		else
			PutErrMsg("Unknown Command.");
	}
	std::cout << "Exit" << std::endl;
	return (0);
}
