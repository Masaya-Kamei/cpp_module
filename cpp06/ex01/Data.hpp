/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:56:09 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/22 17:01:18 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>

class Data
{
public:
	Data(const int n = 0, const std::string& s = "");
	Data(const Data& rhs);
	Data&	operator=(const Data& rhs);
	~Data();

	bool	operator==(const Data& rhs) const;

private:
	int			n_;
	std::string	s_;
};

#endif
