/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 09:53:45 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/25 08:19:36 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& rhs);
	FragTrap&	operator=(const FragTrap& rhs);
	~FragTrap();

	void	highFivesGuys(void) const;

private:

};

#endif
