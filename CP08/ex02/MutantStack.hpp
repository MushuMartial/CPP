/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:44:36 by tmartial          #+#    #+#             */
/*   Updated: 2022/05/04 16:04:50 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <list>
# include <iostream>
# include <algorithm>

template< typename T > 
class MutantStack : public std::stack<T>
{
    public:

        typedef typename std::stack<T>::container_type::iterator                iterator;
        typedef typename std::stack<T>::container_type::const_iterator          const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator        reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;

        MutantStack() : std::stack<T>() 
        {
            return ;
        }

        MutantStack(const MutantStack& copy) : std::stack<T>(copy)
        {
            return ;
        }

        virtual ~MutantStack() 
        {
            return ;
        }

        MutantStack &operator=(const MutantStack &rhs)
        {
            if (this == &rhs)
                return (*this);
            std::stack<T>::operator=(rhs);
            return (*this);
        }

        iterator begin( void )
        {
            return (std::stack<T>::c.begin());
        }

        const_iterator begin( void ) const
        {
            return (std::stack<T>::c.begin()); 
        }

        iterator end( void )
        {
            return (std::stack<T>::c.end()); 
        }

        const_iterator end( void ) const
        {
            return (std::stack<T>::c.end()); 
        }

        reverse_iterator rbegin( void )
        {
            return (std::stack<T>::c.rbegin()); 
        }

        const_reverse_iterator rbegin( void ) const
        {
            return (std::stack<T>::c.rbegin()); 
        }
        
        reverse_iterator rend( void )
        {
            return (std::stack<T>::c.rend()); 
        }

        const_reverse_iterator rend( void ) const
        {
            return (std::stack<T>::c.rend());
        }

};


#endif