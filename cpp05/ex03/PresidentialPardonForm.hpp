/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 08:53:46 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 16:18:01 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:

	PresidentialPardonForm(const std::string& target = "");
	PresidentialPardonForm(const PresidentialPardonForm& rhs);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
	~PresidentialPardonForm();

	std::string	getTarget() const;
	void		action() const;

private:

	static const int	kGradeToSign_ = 25;
	static const int	kGradeToExecute_ = 5;

	std::string	target_;
};

#endif
