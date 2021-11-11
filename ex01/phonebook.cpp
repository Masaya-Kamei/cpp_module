/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:34:08 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/11 13:22:20 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "utils.hpp"
#include <iostream>

Phonebook::Phonebook() :
	contact_num_(0), contact_index_(0)
{
}

Phonebook::~Phonebook()
{
}

void	Phonebook::AddContact()
{
	if (!this->contacts_[contact_num_].ReceiveContact())
		return ;
	if (++this->contact_index_ == this->max_contact_num_)
		this->contact_index_ = 0;
	if (++this->contact_num_ > this->max_contact_num_)
		this->contact_num_ = this->max_contact_num_;
	std::cout << "\nSuccess !" << std::endl;
}

void	Phonebook::PutContactsList()
{
	Contact::PutFieldsNameOutline();
	for (int i = 0; i < this->contact_num_; i++)
	{
		this->contacts_[i].PutContactOutline(i);
	}
}

void	Phonebook::SearchContact()
{
	std::string	index_str;
	int			index;

	if (this->contact_num_ == 0)
		return (PutErrMsg("No Contacts."));
	PutContactsList();
	std::cout << std::endl;
	if (!GetWord("Choose index >", index_str))
		return ;
	if (!(isNumber(index_str)))
		return (PutErrMsg("Invalid index."));
	index = std::atoi(index_str.c_str());
	if (index >= this->contact_num_)
		return (PutErrMsg("Invalid index."));
	this->contacts_[index].PutContact();
}
