/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:44:10 by tmartial          #+#    #+#             */
/*   Updated: 2022/05/04 14:53:07 by tmartial         ###   ########.fr       */
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

void Span::addNumber2(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int distance = std::distance(begin, end);
	if (distance + this->_vector.size() > this->_max)
		throw MaxException();
	else
		this->_vector.insert(this->_vector.end(), begin, end);
}

unsigned int Span::longestSpan()
{
	if (this->_vector.size() <= 1)
		throw SizeException();
	unsigned int min = *std::min_element(this->_vector.begin(), this->_vector.end());
	unsigned int max = *std::max_element(this->_vector.begin(), this->_vector.end());
	return (max + ~min+1);
}

unsigned int Span::shortestSpan()
{
	if (this->_vector.size() <= 1)
		throw SizeException();
	unsigned int result[this->_vector.size()];
	std::sort(this->_vector.begin(), this->_vector.end());
	std::adjacent_difference(this->_vector.begin(), this->_vector.end(), result);
	unsigned int min = *std::min_element(result, result + this->_vector.size());
	return (min);
}
