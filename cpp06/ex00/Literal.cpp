/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:14:24 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/22 16:44:49 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

Literal::Literal(const std::string& s)
{
	bool	ok;
	type_ = kInvalid;

	char	c = StrToChar(s, ok);
	if (ok) {
		TplSetLiteral<char>(c, kChar);
		return ;
	}
	int		d = StrToInt(s, ok);
	if (ok) {
		TplSetLiteral<int>(d, kInt);
		return ;
	}
	float	f = StrToFloat(s, ok);
	if (ok) {
		TplSetLiteral<float>(f, kFloat);
		return;
	}
	double	lf = StrToDouble(s, ok);
	if (ok) {
		TplSetLiteral<double>(lf, kDouble);
		return;
	}
}

Literal::Literal(const Literal& rhs) :
	type_(rhs.type_), any_literal_(rhs.any_literal_)
{
}

Literal&	Literal::operator=(const Literal& rhs)
{
	type_ = rhs.type_;
	any_literal_ = rhs.any_literal_;
	return (*this);
}

Literal::~Literal()
{
}

char	Literal::StrToChar(const std::string& s, bool& ok) const
{
	ok = (s.size() == 1 && !std::isdigit(s[0]));
	if (ok)
		return (s[0]);
	return (0);
}

int		Literal::StrToInt(const std::string& s, bool& ok) const
{
	char	*endptr;
	errno = 0;
	long	l = std::strtol(s.c_str(), &endptr, 10);

	ok = (*endptr == '\0' && errno != ERANGE && INT_MIN <= l && l <= INT_MAX);
	if (ok)
		return (static_cast<int>(l));
	return (0);
}

float	Literal::StrToFloat(const std::string& s, bool& ok) const
{
	char	*endptr;
	errno = 0;
	float	f = std::strtof(s.c_str(), &endptr);

	ok = (*endptr == 'f' && *(++endptr) == '\0' && errno != ERANGE);
	if (ok)
		return (f);
	return (0);
}

double	Literal::StrToDouble(const std::string& s, bool& ok) const
{
	char	*endptr;
	errno = 0;
	double	lf = std::strtod(s.c_str(), &endptr);

	ok =  (*endptr == '\0' && errno != ERANGE);
	if (ok)
		return (lf);
	return (0);
}

void	Literal::PrintAllScalarValue() const
{
	switch (type_)
	{
	case kChar:
		TplPrintAllScalarValue<char>();
		break;
	case kInt:
		TplPrintAllScalarValue<int>();
		break;
	case kFloat:
		TplPrintAllScalarValue<float>();
		break;
	case kDouble:
		TplPrintAllScalarValue<double>();
		break;
	default:
		std::cout << "char: impossible\n"
			<< "int: impossible\n"
			<< "float: impossible\n"
			<< "double: impossible" << std::endl;
	}
}
