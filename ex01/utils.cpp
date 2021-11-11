/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:10:07 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/11 15:16:31 by mkamei           ###   ########.fr       */
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

bool	GetWord(const std::string prompt, std::string& word, const int prompt_width)
{
	word.clear();
	while (word.empty())
	{
		std::cout << std::setw(prompt_width) << prompt << " " << std::flush;
		if (!std::getline(std::cin, word))
			return (0);
		StrTrim(word, ' ');
	}
	return (1);
}

void	StrToUpper(std::string& str)
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = std::toupper(str[i]);
	}
}

bool	isNumber(const std::string& str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!(std::isdigit(str[i])))
			return (0);
	}
	return (1);
}

void	PutErrMsg(const std::string& errmsg)
{
	std::cerr << errmsg << std::endl;
}

int	GetMaxStrLen(const std::string strs[], const int count)
{
	std::string::size_type	max;

	max = 0;
	for (int i = 0; i < count; i++)
	{
		if (strs[i].size() > max)
			max = strs[i].size();
	}
	return (max);
}
