/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 08:42:27 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 12:35:16 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <string>

class Cat : public AAnimal
{
public:

	Cat();
	Cat(const Cat& rhs);
	Cat&	operator=(const Cat& rhs);
	~Cat();

	void		makeSound() const;

	void		memorizeIdea(const int index, const std::string& idea);
	std::string	remindIdea(const int index) const;

private:

	Brain	*brain_;
};

#endif
