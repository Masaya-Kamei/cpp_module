/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:06:45 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/15 12:16:49 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>


static int	PutErrMsg(const std::string errmsg, const int exit_status)
{
	std::cerr << errmsg << std::endl;
	return (exit_status);
}

int	main(int argc, char **argv)
{
	Karen k;

	if (argc != 2)
		return (PutErrMsg("Usage: ./karenFilter <level>", 1));
	k.complain(argv[1]);
	return (0);
}
