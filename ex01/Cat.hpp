/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 08:42:27 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/06 09:10:10 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Cat : public Animal
{
public:

	Cat();
	Cat(const Cat& rhs);
	Cat&	operator=(const Cat& rhs);
	Animal&	operator=(const Animal& rhs);
	~Cat();

	Brain*		getBrain(void) const;

	void		makeSound(void) const;
	void		memorizeIdea(const int index, std::string idea);
	std::string	remindIdea(const int index) const;

private:

	Brain	*brain_;
};

#endif
