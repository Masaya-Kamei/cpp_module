/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:34:04 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/30 10:59:02 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
public:

	Phonebook();
	~Phonebook();

	t_status	AddContact();
	t_status	SearchContact() const;

private:

	static const int	max_contact_num_ = 8;
	Contact				contacts_[max_contact_num_];
	int					contact_num_;
	int					contact_index_;

	void	PutContactsList() const;
};

#endif
