/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:43:05 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/10 10:52:02 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:

	Fixed();
	~Fixed();
	Fixed(const Fixed& rhs);
	Fixed&	operator=(const Fixed& rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	static const int	fractional_bits_num_ = 8;
	int					fixed_point_value_;
};

#endif
