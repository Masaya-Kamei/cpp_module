/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:34:04 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/12 13:35:10 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
private:

	static const int	max_contact_num_ = 8;
	Contact				contacts_[max_contact_num_];
	int					contact_num_;
	int					contact_index_;

	void	PutContactsList();

public:

	Phonebook();
	~Phonebook();

	void	AddContact();
	void	SearchContact();
};

#endif
