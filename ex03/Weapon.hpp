/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:49:03 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/09 18:16:28 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
public:

	Weapon(const std::string& type);
	~Weapon();

	const std::string&	getType() const;
	void				setType(const std::string& type);

private:

	std::string type_;
};

#endif
