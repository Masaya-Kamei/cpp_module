/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:55:02 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 10:37:50 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class AAnimal
{
public:

	AAnimal();
	AAnimal(const AAnimal& rhs);
	AAnimal&	operator=(const AAnimal& rhs);
	virtual ~AAnimal();
	AAnimal(const std::string& type);

	const std::string&	getType() const;
	virtual void		makeSound() const = 0;

	virtual void		memorizeIdea(const int index, const std::string& idea) = 0;
	virtual std::string	remindIdea(const int index) const = 0;

protected:

	std::string	type_;
};

#endif
