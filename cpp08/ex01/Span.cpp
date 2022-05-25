/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:06:45 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/25 10:51:48 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <numeric>

Span::Span(const unsigned int n) :
	vec_(), max_size_(n), sorted_(false)
{
}

Span::Span(const Span& rhs) :
	vec_(rhs.vec_), max_size_(rhs.max_size_), sorted_(rhs.sorted_)
{
}

Span&	Span::operator=(const Span& rhs)
{
	vec_ = rhs.vec_;
	max_size_ = rhs.max_size_;
	sorted_ = rhs.sorted_;
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(const int num)
{
	if (vec_.size() == max_size_)
		throw std::length_error("Already max size.");
	vec_.push_back(num);
	sorted_ = false;
}

unsigned int	Span::shortestSpan()
{
	if (vec_.size() <= 1)
		throw std::logic_error("Not found Span.");
	if (!sorted_)
		std::sort(vec_.begin(), vec_.end());
	sorted_ = true;

	std::vector<int> diffs(vec_.size());
	std::adjacent_difference(vec_.begin(), vec_.end(), diffs.begin());
	return (*(std::min_element(++diffs.begin(), diffs.end())));
}

unsigned int	Span::longestSpan()
{
	if (vec_.size() <= 1)
		throw std::logic_error("Not found Span.");
	if (!sorted_)
		std::sort(vec_.begin(), vec_.end());
	sorted_ = true;

	return (*(vec_.rbegin()) - *(vec_.begin()));
}
