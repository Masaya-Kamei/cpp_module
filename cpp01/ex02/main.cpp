/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:38:23 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/13 14:37:47 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int	main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string		*stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "[ Address ]" << std::endl;
	std::cout << std::setw(11) << "str: " << &str << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "[ string ]" << std::endl;
	std::cout << std::setw(11) << "str: " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;

	return (0);
}
