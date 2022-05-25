/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:40:57 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/25 15:06:23 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <class T, class Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
private:
	typedef  MutantStack<T, Container>		mstack_type;

public:
	explicit MutantStack(const Container& cont = Container()) : mstack_type::stack(cont) {};
	MutantStack(const mstack_type& rhs) : mstack_type::stack(rhs) {};
	~MutantStack() {};
	mstack_type&	operator=(const mstack_type& rhs)
	{
		mstack_type::stack::operator=(rhs);
		return (*this);
	}

	typedef typename Container::iterator				iterator;
	typedef typename Container::const_iterator			const_iterator;
	typedef typename Container::reverse_iterator		reverse_iterator;
	typedef typename Container::const_reverse_iterator	const_reverse_iterator;

	iterator				begin() 		{ return (this->c.begin()); }
	const_iterator			begin() const	{ return (this->c.begin()); }
	iterator 				end() 			{ return (this->c.end()); }
	const_iterator			end() const 	{ return (this->c.end()); }
	reverse_iterator		rbegin()		{ return (this->c.rbegin()); }
	const_reverse_iterator	rbegin() const	{ return (this->c.rbegin()); }
	reverse_iterator		rend()			{ return (this->c.rend()); }
	const_reverse_iterator	rend() const	{ return (this->c.rend()); }
};

#endif
