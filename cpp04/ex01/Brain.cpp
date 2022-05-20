/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:59:28 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/23 13:43:33 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() :
	ideas_()
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain& rhs) :
	ideas_()
{
	*this = rhs;
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain&	Brain::operator=(const Brain& rhs)
{
	for (int i = 0; i < kIdeasMax_; i++)
		ideas_[i] = rhs.ideas_[i];
	std::cout << "Brain copy assignment operator called." << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

void	Brain::setIdea(const int index, const std::string& idea)
{
	if (index < 0 || index >= kIdeasMax_)
		return ;
	ideas_[index] = idea;
}

std::string	Brain::getIdea(const int index) const
{
	if (index < 0 || index >= kIdeasMax_)
		return ("");
	return (ideas_[index]);
}
