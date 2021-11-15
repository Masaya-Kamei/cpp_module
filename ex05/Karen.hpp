/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:22:27 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/15 11:47:21 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class Karen
{
public:

	Karen();
	~Karen();

	static void	complain(std::string level);

private:

	static void	debug(void);
	static void	info(void);
	static void	warning(void);
	static void	error(void);

	static const std::string	level_strings[4];
	static void					(*level_funcs[4])(void);

};

#endif
