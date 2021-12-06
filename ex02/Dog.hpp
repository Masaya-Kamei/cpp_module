/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:18:13 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 09:10:00 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Dog : public Animal
{
public:

	Dog();
	Dog(const Dog& rhs);
	Dog&	operator=(const Dog& rhs);
	Animal&	operator=(const Animal& rhs);
	~Dog();

	Brain*		getBrain(void) const;

	void		makeSound(void) const;
	void		memorizeIdea(const int index, std::string idea);
	std::string	remindIdea(const int index) const;

private:

	Brain	*brain_;
};

#endif
