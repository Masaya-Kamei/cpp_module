/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:02:42 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/09 11:37:12 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static int	PutErrMsg(const char* const errmsg, const int exit_status)
{
	std::cerr << errmsg << std::endl;
	return (exit_status);
}

static int	ReplaceString(
	std::istream& ifs, std::ostream& ofs,
	const std::string& s1, const std::string& s2)
{
	std::string				line;
	std::string::size_type	pos;

	while (std::getline(ifs, line))
	{
		if (!ifs.eof())
			line.push_back('\n');
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		ofs << line << std::flush;
	}
	if (!ifs.eof())
		return (PutErrMsg("Read Error.", 1));
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (PutErrMsg("Usage: ./replace <filename> <s1> <s2>", 1));

	std::ifstream	ifs (argv[1]);
	if (!ifs)
		return (PutErrMsg("Open Error.", 1));

	const std::string	s1 = argv[2];
	const std::string	s2 = argv[3];
	if (s1.empty())
		return (PutErrMsg("s1 is empty.", 1));

	std::ofstream	ofs (argv[1] + std::string(".replace"));
	if (!ofs)
		return (PutErrMsg("File Create Error.", 1));

	return (ReplaceString(ifs, ofs, s1, s2));
}
