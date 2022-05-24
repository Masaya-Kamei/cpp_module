/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:21:22 by mkamei            #+#    #+#             */
/*   Updated: 2022/05/24 09:19:37 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stddef.h>
# include <stdexcept>

template <typename T>
class Array
{
public:
	Array(const unsigned int n = 0);
	Array(const Array& rhs);
	Array&	operator=(const Array& rhs);
	~Array();

	T&		operator[](const unsigned int i);
	size_t	size() const;

private:
	T*		arr_;
	size_t	size_;
};

template <typename T>
Array<T>::Array(const unsigned int n) : arr_(new T[n]()), size_(n) {}

template <typename T>
Array<T>::Array(const Array& rhs) : arr_(new T[rhs.size_]()), size_(rhs.size_)
{
	for (size_t i = 0; i < size_; i++)
		arr_[i] = rhs.arr_[i];
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& rhs)
{
	size_ = rhs.size_;
	delete[] arr_;
	arr_ = new T[size_]();
	for (size_t i = 0; i < size_; i++)
		arr_[i] = rhs.arr_[i];
	return (*this);
}

template <typename T>
Array<T>::~Array() { delete[] arr_; }

template <typename T>
T&	Array<T>::operator[](const unsigned int i)
{
	if (i < 0 || i >= size_)
		throw std::out_of_range("Access to out of range.");
	return (arr_[i]);
}

template <typename T>
size_t	Array<T>::size() const { return (size_); }

#endif
