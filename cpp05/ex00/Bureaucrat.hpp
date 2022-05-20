/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:19:51 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 14:02:52 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class Bureaucrat
{
public:

	Bureaucrat(const std::string& name = "", const int grade = kGradeLowest_);
	Bureaucrat(const Bureaucrat& rhs);
	Bureaucrat& operator=(const Bureaucrat& rhs);
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	int			incGrade();
	int			decGrade();

private:

	class GradeTooHighException : public std::range_error
	{
	public:
		GradeTooHighException(): range_error("The grade is too high") {}
	};

	class GradeTooLowException : public std::range_error
	{
	public:
		GradeTooLowException(): range_error("The grade is too low") {}
	};

	static const int	kGradeHighest_ = 1;
	static const int	kGradeLowest_ = 150;

	const std::string	name_;
	int					grade_;
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& rhs);

#endif
