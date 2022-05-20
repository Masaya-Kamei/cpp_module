/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:40:27 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 14:45:17 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class Bureaucrat;

class Form
{
public:

	Form(const std::string& name = "",
		const int grade_to_sign = kGradeHighest_,
		const int grade_to_exec = kGradeHighest_);
	Form(const Form& rhs);
	Form& operator=(const Form& rhs);
	~Form();

	std::string	getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;

	void		beSigned(const Bureaucrat& bureaucrat);

private:

	class GradeTooHighException : public std::range_error
	{
	public:
		GradeTooHighException(): range_error("the grade is too high") {}
	};

	class GradeTooLowException : public std::range_error
	{
	public:
		GradeTooLowException(): range_error("the grade is too low") {}
	};

	static const int	kGradeHighest_ = 1;
	static const int	kGradeLowest_ = 150;

	const std::string	name_;
	bool				signed_;
	const int			grade_to_sign_;
	const int			grade_to_exec_;
};

std::ostream&	operator<<(std::ostream& out, const Form& rhs);

#endif

