/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:55:02 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 10:53:11 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
public:

	Animal();
	Animal(const Animal& rhs);
	Animal&	operator=(const Animal& rhs);
	virtual ~Animal();

	std::string		getType(void) const;
	virtual void	makeSound(void) const;

protected:

	std::string	type;

};

#endif
