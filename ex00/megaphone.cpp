/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:39:52 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/08 15:00:25 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

int	main(int argc, char **argv)
{
	int					i;
	int					j;
	const std::locale	l = std::locale::classic();

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			std::cout << std::toupper<char>(argv[i][j], l);
	}
	std::cout << std::endl;
	return (0);
}
