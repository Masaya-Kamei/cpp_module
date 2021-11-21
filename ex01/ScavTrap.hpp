/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:41:43 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/20 18:01:25 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &rhs);
	ScavTrap&	operator=(const ScavTrap &rhs);
	~ScavTrap();

	void	guardGate(void) const;

private:

};

#endif
