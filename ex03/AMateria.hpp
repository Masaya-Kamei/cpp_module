/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:19:29 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 15:31:02 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>

class AMateria
{
protected:

	std::string	type_;

public:

	AMateria(std::string const &type);
	AMateria(const AMateria& rhs);
	AMateria&	operator=(const AMateria& rhs);
	virtual	~AMateria();

	std::string const & getType() const;

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target) = 0;
};

#endif
