/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:13:23 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 11:18:29 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:

	WrongCat();
	WrongCat(const WrongCat& rhs);
	WrongCat&	operator=(const WrongCat& rhs);
	~WrongCat();

	void	makeSound(void) const;
};

#endif
