/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:21:27 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/10 12:47:43 by mkamei           ###   ########.fr       */
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

	Fixed(const int rhs);
	Fixed(const float rhs);

	Fixed&	operator+(const Fixed& rhs);
	Fixed&	operator+(const int& rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

private:

	static const int	fractional_bits_num_ = 8;
	int					fixed_point_value_;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif
