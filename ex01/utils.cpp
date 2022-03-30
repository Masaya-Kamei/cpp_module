/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:10:07 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/30 10:54:36 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iostream>
#include <string>
#include <iomanip>

static void	StrTrim(std::string& str, const char c)
{
	const size_t	start = str.find_first_not_of(c);
	const size_t	end = str.find_last_not_of(c);

	if (start == std::string::npos)
		str = "";
	else
		str = str.substr(start, (end - start + 1));
}

t_status	ReadLine(const std::string &prompt, std::string &line, const int prompt_width)
{
	line.clear();
	while (line.empty())
	{
		std::cout << std::setw(prompt_width) << prompt << " " << std::flush;
		std::getline(std::cin, line);
		if (!std::cin.good())
			return (FAIL);
		StrTrim(line, ' ');
	}
	return (SUCCESS);
}

void	StrToUpper(std::string& str)
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = std::toupper(str[i]);
	}
}

bool	isStrDigit(const std::string& str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!(std::isdigit(str[i])))
			return (0);
	}
	return (1);
}

t_status	PutErrMsg(const std::string& errmsg, const t_status st)
{
	std::cerr << errmsg << std::endl;
	return (st);
}
