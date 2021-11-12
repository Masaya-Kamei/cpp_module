/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:08:11 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/12 16:32:51 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:

	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);

private:

	std::string	name_;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
