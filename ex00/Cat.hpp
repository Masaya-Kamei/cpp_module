/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 08:42:27 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 10:51:56 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <string>

class Cat : public Animal
{
public:

	Cat();
	Cat(const Cat& rhs);
	Cat&	operator=(const Cat& rhs);
	~Cat();

	void		makeSound(void) const;
};

#endif
