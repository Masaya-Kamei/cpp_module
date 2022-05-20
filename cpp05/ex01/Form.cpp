/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:25:50 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 14:58:54 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, const int grade_to_sign, const int grade_to_exec):
	name_(name), signed_(false),
	grade_to_sign_(grade_to_sign), grade_to_exec_(grade_to_exec)
{
	if (grade_to_sign_ < kGradeHighest_ || grade_to_exec_ < kGradeHighest_)
		throw Form::GradeTooHighException();
	else if (grade_to_sign_ > kGradeLowest_ || grade_to_exec_ > kGradeLowest_)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& rhs):
	name_(rhs.name_), signed_(rhs.signed_),
	grade_to_sign_(rhs.grade_to_sign_), grade_to_exec_(rhs.grade_to_exec_)
{
}

Form&	Form::operator=(const Form& rhs)
{
	const_cast<std::string&>(name_) = rhs.name_;
	signed_ = rhs.signed_;
	const_cast<int&>(grade_to_sign_) = rhs.grade_to_sign_;
	const_cast<int&>(grade_to_exec_) = rhs.grade_to_exec_;
	return (*this);
}

Form::~Form()
{
}

std::string	Form::getName()    const { return (name_); }
bool	Form::getSigned()      const { return (signed_); }
int		Form::getGradeToSign() const { return (grade_to_sign_); }
int		Form::getGradeToExec() const { return (grade_to_exec_); }

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= grade_to_sign_)
		signed_ = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& out, const Form& rhs)
{
	out << rhs.getName()
		<< ", whether signed or not is " << rhs.getSigned()
		<< ", grade to sign is " << rhs.getGradeToSign()
		<< ", grade to exec is " << rhs.getGradeToExec();
	return (out);
}
