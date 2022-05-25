/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:52:03 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/25 11:11:57 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
public:
	Span(const unsigned int n = 0);
	Span(const Span& rhs);
	Span&	operator=(const Span& rhs);
	~Span();

	void			addNumber(const int num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	template <typename InputIterator>
	void	rangeAddNumber(InputIterator first, InputIterator last)
	{
		if (last < first)
			throw (std::invalid_argument("Invalid iterator range."));
		while (first != last) {
			addNumber(*first);
			++first;
		}
	}

private:
	std::vector<int>	vec_;
	unsigned int		max_size_;
	bool				sorted_;
};

#endif
