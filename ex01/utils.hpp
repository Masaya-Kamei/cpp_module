/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:12:08 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/11 15:16:42 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <string>

bool	GetWord(const std::string prompt, std::string& word, const int prompt_width = 0);
void	StrToUpper(std::string& str);
bool	isNumber(const std::string& str);
void	PutErrMsg(const std::string& errmsg);
int		GetMaxStrLen(const std::string strs[], const int count);

#endif
