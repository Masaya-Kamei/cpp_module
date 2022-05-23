/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:07:55 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/22 13:45:46 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);

	Literal literal(argv[1]);
	literal.PrintAllScalarValue();

	return (0);
}
