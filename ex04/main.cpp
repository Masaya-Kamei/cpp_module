/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:02:42 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/12 15:14:34 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

static int	PutErrMsg(const char* const errmsg, const int exit_status)
{
	std::cerr << errmsg << std::endl;
	return (exit_status);
}

static int	ReplaceString(
	std::istream& ifs, std::ostream& ofs,
	const std::string& s1, const std::string& s2)
{
	std::ostringstream		oss;
	std::string				str;
	std::string::size_type	pos;

	oss << ifs.rdbuf();
	str = oss.str();
	pos = str.find(s1);
	while (pos != std::string::npos)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos = str.find(s1, pos + s2.length());
	}
	ofs << str << std::flush;
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
