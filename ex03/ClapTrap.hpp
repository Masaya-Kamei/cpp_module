/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:15:33 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/25 08:21:27 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
public:

	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& rhs);
	ClapTrap&	operator=(const ClapTrap& rhs);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:

	std::string	name_;
	int			hit_points_;
	int			max_hit_points_;
	int			energy_points_;
	int			attack_damage_;

	static const int	kHitPointsDefault_ = 10;
	static const int	kEnergyPointsDefault_ = 10;
	static const int	kAttackDamageDefault_ = 0;
};

#endif


