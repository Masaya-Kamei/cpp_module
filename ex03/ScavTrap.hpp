/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:41:43 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/21 16:42:49 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:

	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &rhs);
	ScavTrap&	operator=(const ScavTrap &rhs);
	~ScavTrap();

	void	guardGate(void) const;

protected:

	static const int	kHitPointsDefault_ = 100;
	static const int	kEnergyPointsDefault_ = 50;
	static const int	kAttackDamageDefault_ = 20;

};

#endif
