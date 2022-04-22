/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:54:39 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/22 13:05:17 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal& rhs);
	WrongAnimal&	operator=(const WrongAnimal& rhs);
	virtual ~WrongAnimal();
	WrongAnimal(const std::string& type);

	const std::string&	getType() const;
	void				makeSound() const;

protected:

	std::string	type_;
};

#endif
