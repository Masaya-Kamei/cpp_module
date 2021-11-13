/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:08:11 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/13 10:17:30 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void) const;

private:

	std::string	name_;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
