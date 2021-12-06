/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:59:28 by mkamei            #+#    #+#             */
/*   Updated: 2021/12/05 16:12:26 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) :
	ideas_()
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& rhs)
{
	*this = rhs;
}

Brain&	Brain::operator=(const Brain& rhs)
{
	for (int i = 0; i < kIdeasMax_; i++)
		ideas_[i] = rhs.ideas_[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;
}

void	Brain::setIdea(const int index, std::string idea)
{
	if (index < 0 || index >= kIdeasMax_)
		return ;
	ideas_[index] = idea;
}

std::string	Brain::getIdea(const int index)
{
	if (index < 0 || index >= kIdeasMax_)
		return ("");
	return (ideas_[index]);
}
