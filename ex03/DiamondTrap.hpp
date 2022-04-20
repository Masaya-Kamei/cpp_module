/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:02:39 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/20 09:52:49 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:

	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& rhs);
	DiamondTrap&	operator=(const DiamondTrap& rhs);
	~DiamondTrap();

	void	attack(std::string const& target);
	void	whoAmI() const;

private:

	std::string	name_;
};

#endif
