/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:02:12 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 16:17:54 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:

	RobotomyRequestForm(const std::string& target = "");
	RobotomyRequestForm(const RobotomyRequestForm& rhs);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
	~RobotomyRequestForm();

	std::string	getTarget() const;
	void action() const;

private:

	static const int	kGradeToSign_ = 72;
	static const int	kGradeToExecute_ = 45;

	std::string	target_;
};

#endif
