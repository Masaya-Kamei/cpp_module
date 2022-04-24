/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:41:43 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/25 08:24:31 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:

	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& rhs);
	ScavTrap&	operator=(const ScavTrap& rhs);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate() const;

protected:

	static const int	kHitPointsDefault_ = 100;
	static const int	kEnergyPointsDefault_ = 50;
	static const int	kAttackDamageDefault_ = 20;
};

#endif
