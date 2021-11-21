/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 09:53:45 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/21 10:23:06 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

	FragTrap(std::string name);
	FragTrap(FragTrap& rhs);
	FragTrap&	operator=(FragTrap& rhs);
	~FragTrap();

	void	highFivesGuys(void) const;

protected:

private:

};

#endif
