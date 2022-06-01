/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:55:56 by mkamei            #+#    #+#             */
/*   Updated: 2022/06/01 14:34:39 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

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

const int&			Data::getN() const { return (n_); }
const std::string&	Data::getS() const { return (s_); }

bool	Data::operator==(const Data& rhs) const
{
	return (n_ == rhs.n_ && s_ == rhs.s_);
}

std::ostream&	operator<<(std::ostream& out, const Data& rhs)
{
	out << rhs.getN() << ", " << rhs.getS();
	return (out);
}
