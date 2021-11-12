/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:35:06 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/12 13:39:06 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

const std::string				Contact::fields_name_[FIELD_NUM]
	= {"first name", "last name", "nickname", "phone number", "darkest secret"};
const std::string::size_type	Contact::max_field_name_len_
	= GetMaxStrLen(fields_name_, FIELD_NUM);

Contact::Contact()
{
}

Contact::~Contact()
{
}

bool	Contact::ReceiveContact()
{
	for (int i = 0; i < FIELD_NUM; i++)
	{
		if (!GetWord(fields_name_[i] + ":"
			, fields_[i], max_field_name_len_ + 1))
		{
			return (0);
		}
	}
	return (1);
}

void	Contact::PutFieldsNameOutline()
{
	std::cout << "|" << std::string(43, '-') << "|" << std::endl;
	std::cout << "|" << std::setw(10) << "index";
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|" << std::setw(10) << fields_name_[i];
	}
	std::cout << "|" << std::endl;
	std::cout << "|" << std::string(43, '-') << "|" << std::endl;
}

void	Contact::PutContactOutline(const int index) const
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = 0; i < 3; i++)
	{
		if (fields_[i].size() >= 10)
			std::cout << "|" << fields_[i].substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << fields_[i];
	}
	std::cout << "|" << std::endl;
	std::cout << "|" << std::string(43, '-') << "|" << std::endl;
}

void	Contact::PutContact() const
{
	for (int i = 0; i < FIELD_NUM; i++)
	{
		std::cout << std::setw(max_field_name_len_)
			<< fields_name_[i] << ": " << fields_[i] << std::endl;
	}
}
