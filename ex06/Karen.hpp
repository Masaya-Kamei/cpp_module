/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:22:27 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/21 15:39:08 by mkamei           ###   ########.fr       */
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

};

#endif
