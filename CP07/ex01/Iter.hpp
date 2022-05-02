/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:18:27 by tmartial          #+#    #+#             */
/*   Updated: 2022/05/02 13:26:13 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename S>
void	iter(T* tab, S const & tab_size, void (*f)(const T&))
{
	for (S i = 0; i < tab_size; i++)
		(*f)(tab[i]);	
}

template <typename T>
void	multiple( T const & x ) {std::cout << "multiple = " << x * 2 << std::endl;}

/* ---- Pdf correctin ---- */
class Awesome
{
 	public:
 		Awesome( void ) : _n( 42 ) { return; }
 		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

#endif