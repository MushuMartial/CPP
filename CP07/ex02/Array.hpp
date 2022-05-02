/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:27:21 by tmartial          #+#    #+#             */
/*   Updated: 2022/05/02 14:03:06 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public:
		// Constructors
		Array() : _size(0), _array(new T[0]) {};
		Array(unsigned int size) : _size(size), _array(new T[size]) {};
		Array(const Array& src) : _size(src._size), _array(new T[src._size])
		{
			for (unsigned int i = 0; i < src._size; ++i)
				this->_array[i] = src._array[i];	
		};
		
		// Destructor
		~Array() {delete [] this->_array;};

		// Operator overload
		Array& operator=(const Array& rhs)
		{
			this->_size = rhs._size;
			this->_array = new T[rhs._size];
			for (unsigned int i = 0; i < rhs._size; ++i)
				this->_array[i] = rhs._array[i];
			return *this;
		}

		T& operator[](unsigned int index)
		{
			if (index >= this->_size)
				throw IndexInvalidException();
			return this->_array[index];
		}
		
		// Fonction
		unsigned int size() {return this->_size;};

		// Execption
		class IndexInvalidException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Index Invalid");
				}
		};
		
	private:
		unsigned int _size;
		T* _array;
};


#endif