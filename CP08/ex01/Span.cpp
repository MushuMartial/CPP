/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:44:10 by tmartial          #+#    #+#             */
/*   Updated: 2022/05/03 17:56:29 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"
#include <vector>
#include <algorithm>
#include <numeric>

/* Constructor */
Span::Span() : _max(0)
{
	
}

Span::Span(unsigned int max) : _max(max)
{
	
}

Span::Span(const Span& src) : _max(src._max), _vector(src._vector)
{
	
}

/* Destructor */
Span::~Span()
{
	
}

/* Getters */
int	Span::getVector(unsigned int pos) const 
{
	return this->_vector[pos];
}

/* Operator Overload */
Span& Span::operator=(const Span& rhs)
{
	this->_max = rhs._max;
	this->_vector = rhs._vector;
	return *this;
}

/* Fonctions */
void Span::addNumber(int num)
{
	if (this->_vector.size() >= this->_max)
		throw MaxException();
	else
		this->_vector.push_back(num);
}


unsigned int Span::longestSpan()
{
	unsigned int min = *std::min_element(this->_vector.begin(), this->_vector.end());
	unsigned int max = *std::max_element(this->_vector.begin(), this->_vector.end());
	return (max - min);
}

unsigned int Span::shortestSpan()
{
	unsigned int result[this->_vector.size()];
	std::adjacent_difference(this->_vector.begin(), this->_vector.end(), result);
	unsigned int min = *std::min_element(result, result + this->_vector.size());
	return (min);
}
