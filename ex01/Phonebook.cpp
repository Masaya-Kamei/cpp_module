/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:34:08 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/30 11:01:53 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "utils.hpp"
#include <iostream>

Phonebook::Phonebook() :
	contact_num_(0), contact_index_(0)
{
}

Phonebook::~Phonebook()
{
}

t_status	Phonebook::AddContact()
{
	if (contacts_[contact_index_].ReceiveContact() == FAIL)
		return (PutErrMsg("\n\nFail !", FAIL));
	contact_index_ = (contact_index_ + 1) % max_contact_num_;
	if (contact_num_ < max_contact_num_)
		contact_num_++;
	std::cout << "\nSuccess !" << std::endl;
	return (SUCCESS);
}

void	Phonebook::PutContactsList() const
{
	Contact::PutFieldsNameOutline();
	for (int i = 0; i < contact_num_; i++)
	{
		contacts_[i].PutContactOutline(i);
	}
}

t_status	Phonebook::SearchContact() const
{
	std::string	index_str;
	int			index;

	if (contact_num_ == 0)
		return (PutErrMsg("No Contacts.", SUCCESS));
	PutContactsList();
	std::cout << std::endl;
	if (ReadLine("Choose index >", index_str) == FAIL)
		return (PutErrMsg("\n\nFail !", FAIL));
	if (!(isStrDigit(index_str)))
		return (PutErrMsg("Invalid index.", SUCCESS));
	index = std::atoi(index_str.c_str());
	if (index >= contact_num_)
		return (PutErrMsg("Invalid index.", SUCCESS));
	contacts_[index].PutContact();
	return (SUCCESS);
}
