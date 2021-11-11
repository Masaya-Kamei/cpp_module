/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:00:10 by mkamei            #+#    #+#             */
/*   Updated: 2021/11/11 14:08:36 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "utils.hpp"
# include <string>

class Contact
{
private:

	enum FieldIndex
	{
		FIRST_NAME,
		LAST_NAME,
		NICKNAME,
		PHONE_NUMBER,
		DARKEST_SECRET,
		FIELD_NUM
	};

	static const std::string			fields_name_[FIELD_NUM];
	static const std::string::size_type	max_field_name_len;
	std::string							fields_[FIELD_NUM];

public:

	Contact();
	~Contact();

	bool		ReceiveContact();
	static void	PutFieldsNameOutline();
	void		PutContactOutline(const int index) const;
	void		PutContact() const;
};

#endif
