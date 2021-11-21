/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:02:39 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/21 16:42:43 by mkamei           ###   ########.fr       */
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

	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap& rhs);
	DiamondTrap&	operator=(DiamondTrap& rhs);
	~DiamondTrap();

	void	attack(std::string const& target);
	void	whoAmI(void) const;

private:

	std::string	name_;

};

#endif
