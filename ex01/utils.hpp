/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:12:08 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/09 18:11:02 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <string>

typedef enum e_status
{
	SUCCESS = 0,
	FAIL	= 1
}			t_status;

t_status	ReadLine(const std::string& prompt, std::string& line, const int prompt_width = 0);
void		StrToUpper(std::string& str);
bool		isStrDigit(const std::string& str);
t_status	PutErrMsg(const std::string& errmsg, const t_status st);

#endif
