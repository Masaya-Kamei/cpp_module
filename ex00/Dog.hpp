/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:18:13 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 10:51:40 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>

class Dog : public Animal
{
public:

	Dog();
	Dog(const Dog& rhs);
	Dog&	operator=(const Dog& rhs);
	~Dog();

	void		makeSound(void) const;
};

#endif
