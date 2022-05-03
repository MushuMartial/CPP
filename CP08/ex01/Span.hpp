/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:43:56 by tmartial          #+#    #+#             */
/*   Updated: 2022/05/03 17:33:11 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

class Span 
{
	public:
		//Constructor
		Span();
		Span(unsigned int max);
		Span(const Span& src);

		//Destructor
		~Span();

		//Getters
		int getVector(unsigned int pos) const;
		
		//Operation overload
		Span& operator=(const Span& rhs);

		//Fonction
		void addNumber(int num);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		
		class MaxException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Max is reached");
				}
		};
	
	private:
		unsigned int _max;
		std::vector<int> _vector;		
};


#endif