/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:18:13 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 11:30:07 by mkamei           ###   ########.fr       */
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
	~Dog();

	void		makeSound() const;

	void		memorizeIdea(const int index, const std::string& idea);
	std::string	remindIdea(const int index) const;

private:

	Brain	*brain_;
};

#endif
