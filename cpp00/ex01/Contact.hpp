/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:00:10 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/30 10:59:44 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "utils.hpp"
# include <string>

class Contact
{
public:

	Contact();
	~Contact();

	t_status	ReceiveContact();
	static void	PutFieldsNameOutline();
	void		PutContactOutline(const int index) const;
	void		PutContact() const;

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
	static const int					max_field_name_len_;
	std::string							fields_[FIELD_NUM];
};

#endif
