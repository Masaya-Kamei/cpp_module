/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:21:27 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/19 10:11:54 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed
{
public:

	Fixed();
	Fixed(const Fixed& rhs);
	Fixed(const int n);
	Fixed(const float f);
	~Fixed();

	Fixed& operator=(const Fixed& rhs);

	bool operator>(const Fixed& rhs) const;
	bool operator<(const Fixed& rhs) const;
	bool operator>=(const Fixed& rhs) const;
	bool operator<=(const Fixed& rhs) const;
	bool operator==(const Fixed& rhs) const;
	bool operator!=(const Fixed& rhs) const;

	const Fixed operator+(const Fixed& rhs) const;
	const Fixed operator-(const Fixed& rhs) const;
	const Fixed operator*(const Fixed& rhs) const;
	const Fixed operator/(const Fixed& rhs) const;
	const Fixed operator+(void) const;
	const Fixed operator-(void) const;

	const Fixed	operator++();
	const Fixed	operator++(int);
	const Fixed	operator--();
	const Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	static const Fixed&	min(const Fixed& f1, const Fixed& f2);
	static Fixed&		min(Fixed& f1, Fixed& f2);
	static const Fixed&	max(const Fixed& f1, const Fixed& f2);
	static Fixed&		max(Fixed& f1, Fixed& f2);

private:

	static const int	fractional_bits_num_;
	int					fixed_point_value_;

};

std::ostream &operator<<(std::ostream &out, const Fixed &rhs);

#endif
