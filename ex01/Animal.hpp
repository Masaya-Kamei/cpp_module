/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:55:02 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 10:37:50 by mkamei           ###   ########.fr       */
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
	Animal(const std::string& type);

	const std::string&	getType() const;
	virtual void		makeSound() const;

	virtual void		memorizeIdea(const int index, const std::string& idea) = 0;
	virtual std::string	remindIdea(const int index) const = 0;

protected:

	std::string	type_;
};

#endif
