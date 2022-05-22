/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:55:56 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/22 17:01:45 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(const int n, const std::string& s) :
	n_(n), s_(s)
{
}

Data::Data(const Data& rhs) :
	n_(rhs.n_), s_(rhs.s_)
{
}

Data&	Data::operator=(const Data& rhs)
{
	n_ = rhs.n_;
	s_ = rhs.s_;
	return (*this);
}

Data::~Data()
{
}

bool	Data::operator==(const Data& rhs) const
{
	return (n_ == rhs.n_ && s_ == rhs.s_);
}
