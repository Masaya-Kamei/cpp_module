/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:55:44 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 16:07:07 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "iostream"

Bureaucrat::Bureaucrat(const std::string& name, const int grade) :
	name_(name), grade_(grade)
{
	if (grade_ < kGradeHighest_)
		throw Bureaucrat::GradeTooHighException();
	else if (grade_ > kGradeLowest_)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs) :
	name_(rhs.name_), grade_(rhs.grade_)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	const_cast<std::string&>(name_) = rhs.name_;
	grade_ = rhs.grade_;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName()  const { return (name_); }
int			Bureaucrat::getGrade() const { return (grade_); }

int		Bureaucrat::incGrade()
{
	if (grade_ + 1 > kGradeLowest_)
		throw Bureaucrat::GradeTooLowException();
	return (++grade_);
}

int		Bureaucrat::decGrade()
{
	if (grade_ - 1 < kGradeHighest_)
		throw Bureaucrat::GradeTooHighException();
	return (--grade_);
}

void	Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << name_ << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name_ << " couldn't sign "
			<< form.getName() << " because " << e.what() << "." << std::endl;
	}
}

void	Bureaucrat::executeForm(Form& form) const
{
	try
	{
		form.execute(*this);
		std::cout << name_ << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name_ << " couldn't execute "
			<< form.getName() << " because " << e.what() << "." << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (out);
}
