/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:50:24 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 16:12:21 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
public:

	Brain();
	Brain(const Brain& rhs);
	Brain&	operator=(const Brain& rhs);
	~Brain();

	void		setIdea(const int index, std::string idea);
	std::string	getIdea(const int index);

private:

	static const int	kIdeasMax_ = 100;
	std::string			ideas_[kIdeasMax_];
};

#endif
