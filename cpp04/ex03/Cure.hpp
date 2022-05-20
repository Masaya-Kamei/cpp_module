/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:40:58 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 16:53:02 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:

	Cure();
	Cure(const Cure& rhs);
	Cure& operator=(const Cure& rhs);
	~Cure();

	AMateria*	clone() const;
	void		use(ICharacter& target);
};

#endif
