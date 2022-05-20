/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:03:47 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 16:53:13 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:

	Ice();
	Ice(const Ice& rhs);
	Ice& operator=(const Ice& rhs);
	~Ice();

	AMateria*	clone() const;
	void		use(ICharacter& target);
};

#endif
