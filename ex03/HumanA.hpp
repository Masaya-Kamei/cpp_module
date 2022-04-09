/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:02:23 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/09 10:21:27 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
public:

	HumanA(const std::string &name, Weapon& weapon);
	~HumanA();

	void	attack() const;
	void	setWeapon(Weapon& weapon);

private:

	std::string	name_;
	Weapon		&weapon_;
};

#endif
