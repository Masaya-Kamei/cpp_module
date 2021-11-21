/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 09:53:45 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/21 16:42:46 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:

	FragTrap(std::string name);
	FragTrap(FragTrap& rhs);
	FragTrap&	operator=(FragTrap& rhs);
	~FragTrap();

	void	highFivesGuys(void) const;

protected:

	static const int	kHitPointsDefault_ = 100;
	static const int	kEnergyPointsDefault_ = 100;
	static const int	kAttackDamageDefault_ = 30;

};

#endif
