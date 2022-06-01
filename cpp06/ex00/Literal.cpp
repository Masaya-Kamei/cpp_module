/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:14:24 by mkamei            #+#    #+#             */
/*   Updated: 2022/06/01 17:09:39 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

Literal::Literal(const std::string& s)
{
	bool	ok;
	any_literal_.type = kInvalid;

	char	c = StrToChar(s, ok);
	if (ok) {
		any_literal_.type = kChar;
		any_literal_.c = c;
		return ;
	}
	int		d = StrToInt(s, ok);
	if (ok) {
		any_literal_.type = kInt;
		any_literal_.d = d;
		return ;
	}
	float	f = StrToFloat(s, ok);
	if (ok) {
		any_literal_.type = kFloat;
		any_literal_.f = f;
		return;
	}
	double	lf = StrToDouble(s, ok);
	if (ok) {
		any_literal_.type = kDouble;
		any_literal_.lf = lf;
		return;
	}
}

Literal::Literal(const Literal& rhs) :
	any_literal_(rhs.any_literal_)
{
}

Literal&	Literal::operator=(const Literal& rhs)
{
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
	switch (any_literal_.type)
	{
	case kChar:
		TplPrintAllScalarValue<char>(any_literal_.c);
		break;
	case kInt:
		TplPrintAllScalarValue<int>(any_literal_.d);
		break;
	case kFloat:
		TplPrintAllScalarValue<float>(any_literal_.f);
		break;
	case kDouble:
		TplPrintAllScalarValue<double>(any_literal_.lf);
		break;
	default:
		std::cout << "char: impossible\n"
			<< "int: impossible\n"
			<< "float: impossible\n"
			<< "double: impossible" << std::endl;
	}
}
