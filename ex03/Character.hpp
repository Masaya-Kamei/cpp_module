/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:52:45 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 16:49:56 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Character : public ICharacter
{
public:

	Character(const std::string& name);
	Character(const Character& rhs);
	Character&	operator=(const Character& rhs);
	~Character();

	std::string const & getName() const;
	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);

private:

	static const int kMateriaInventoryMax_ = 4;

	std::string	name_;
	AMateria*	materias_[kMateriaInventoryMax_];
};

#endif
