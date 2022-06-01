/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:14:37 by mkamei            #+#    #+#             */
/*   Updated: 2022/06/01 14:28:50 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_HPP
# define LITERAL_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cmath>

class Literal
{
public:
	Literal(const std::string& s = "");
	Literal(const Literal& rhs);
	Literal& operator=(const Literal& rhs);
	~Literal();

	void	PrintAllScalarValue() const;

private:
	enum LiteralType {
		kChar	= 0,
		kInt	= 1,
		kFloat	= 2,
		kDouble	= 3,
		kInvalid= 4,
	};

	LiteralType		type_;
	unsigned long 	any_literal_;

	char		StrToChar(const std::string& s, bool& ok) const;
	int			StrToInt(const std::string& s, bool& ok) const;
	float		StrToFloat(const std::string& s, bool& ok) const;
	double		StrToDouble(const std::string& s, bool& ok) const;

	template <typename T>
	void	TplSetLiteral(const T literal, const LiteralType type)
	{
		type_ = type;
		std::memcpy(&any_literal_, &literal, sizeof(T));
	}

	template <typename T>
	void	TplPrintAllScalarValue() const
	{
		T 	literal;
		std::memcpy(&literal, &any_literal_, sizeof(T));
		TplPrintChar<T>(literal);
		TplPrintInt<T>(literal);
		TplPrintFloat<T>(literal);
		TplPrintDouble<T>(literal);
	}

	template <typename T>
	void	TplPrintChar(const T& l) const
	{
		std::cout << "char: ";
		if (l < 0 || l > 127 || std::isnan(l) || std::isinf(l))
			std::cout << "impossible" << std::endl;
		else if (l < 32 || l > 126)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << '\'' << static_cast<char>(l) << '\'' << std::endl;
	}

	template <typename T>
	void	TplPrintInt(const T& l) const
	{
		std::cout << "int: ";
		if (l < INT_MIN || l > INT_MAX || std::isnan(l) || std::isinf(l))
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(l) << std::endl;
	}

	template <typename T>
	void	TplPrintFloat(const T& l) const
	{
		std::cout << "float: " << static_cast<float>(l) << "f" << std::endl;
	}

	template <typename T>
	void	TplPrintDouble(const T& l) const
	{
		std::cout << "double: "  << static_cast<double>(l) << std::endl;
	}
};

#endif
