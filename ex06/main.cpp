/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:06:45 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/09 14:31:22 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

static int	PutErrMsg(const std::string &errmsg, const int exit_status)
{
	std::cerr << errmsg << std::endl;
	return (exit_status);
}

int	main(int argc, char **argv)
{
	Harl	h;

	if (argc != 2)
		return (PutErrMsg("Usage: ./harlFilter <level>", 1));
	h.complain(argv[1]);
	return (0);
}
