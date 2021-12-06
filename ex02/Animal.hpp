/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:55:02 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 10:00:23 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <string>

class Animal
{
public:

	Animal();
	Animal(const Animal& rhs);
	virtual	Animal&	operator=(const Animal& rhs);
	virtual ~Animal();

	std::string		getType(void) const;

	virtual	Brain*		getBrain(void) const = 0;
	virtual void		memorizeIdea(const int index, std::string idea) = 0;
	virtual std::string	remindIdea(const int index) const = 0;

protected:

	std::string	type_;
};

#endif
