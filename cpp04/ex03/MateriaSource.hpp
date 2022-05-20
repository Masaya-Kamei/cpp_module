/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:21:13 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 14:57:50 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
public:

	MateriaSource();
	MateriaSource(const MateriaSource& rhs);
	MateriaSource&	operator=(const MateriaSource& rhs);
	~MateriaSource();

	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const& type);

private:

	static const int kMateriasMax_ = 4;

	AMateria	*materias_[kMateriasMax_];
};

#endif
