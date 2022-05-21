/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:09:04 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/20 16:47:47 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <string>

class Intern
{
public:

	Intern();
	Intern(const Intern& rhs);
	Intern&	operator=(const Intern& rhs);
	~Intern();

	Form* makeForm(const std::string& form_name, const std::string& target) const;

private:

	class UnknownFormNameException : public std::runtime_error
	{
	public:
		UnknownFormNameException(): runtime_error("Unknown form name") {}
	};
};

#endif
