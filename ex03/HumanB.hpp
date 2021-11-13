/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:18:26 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/13 16:47:54 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
public:

	HumanB(std::string name);
	~HumanB();

	void	attack(void) const;
	void	setWeapon(Weapon& weapon);

private:

	std::string	name_;
	Weapon		*Weapon_;

};

#endif
