/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:18:26 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/09 10:26:10 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
public:

	HumanB(const std::string &name);
	~HumanB();

	void	attack() const;
	void	setWeapon(Weapon& weapon);

private:

	std::string	name_;
	Weapon		*weapon_;
};

#endif
