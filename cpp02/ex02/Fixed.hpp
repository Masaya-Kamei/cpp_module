/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:21:27 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/10 14:21:38 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed
{
public:

	Fixed();
	~Fixed();
	Fixed(const Fixed& rhs);
	Fixed& operator=(const Fixed& rhs);

	Fixed(const int n);
	Fixed(const float f);

	bool	operator>(const Fixed& rhs) const;
	bool	operator<(const Fixed& rhs) const;
	bool	operator>=(const Fixed& rhs) const;
	bool	operator<=(const Fixed& rhs) const;
	bool	operator==(const Fixed& rhs) const;
	bool	operator!=(const Fixed& rhs) const;

	const Fixed 	operator+(const Fixed& rhs) const;
	const Fixed 	operator-(const Fixed& rhs) const;
	const Fixed 	operator*(const Fixed& rhs) const;
	const Fixed 	operator/(const Fixed& rhs) const;
	const Fixed&	operator+() const;
	const Fixed 	operator-() const;

	const Fixed&	operator++();
	const Fixed		operator++(int);
	const Fixed&	operator--();
	const Fixed		operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed&		min(Fixed& f1, Fixed& f2);
	static const Fixed&	min(const Fixed& f1, const Fixed& f2);
	static Fixed&		max(Fixed& f1, Fixed& f2);
	static const Fixed&	max(const Fixed& f1, const Fixed& f2);

private:

	static const int	fractional_bits_num_ = 8;
	int					fixed_point_value_;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& rhs);

#endif
