/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:22:27 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/09 14:10:22 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
public:

	Harl();
	~Harl();

	static void	complain(std::string level);

private:

	static void	debug(void);
	static void	info(void);
	static void	warning(void);
	static void	error(void);
};

#endif
