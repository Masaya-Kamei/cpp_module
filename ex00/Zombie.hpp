/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:08:11 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/01 12:42:44 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:

	Zombie(const std::string &name);
	~Zombie();

	void	announce() const;

private:

	std::string	name_;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
