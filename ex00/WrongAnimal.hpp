/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:54:39 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 11:16:20 by mkamei           ###   ########.fr       */
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
	~WrongAnimal();

	std::string	getType(void) const;
	void	makeSound(void) const;

protected:

	std::string	type;
};

#endif
