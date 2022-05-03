/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:28:08 by tmartial          #+#    #+#             */
/*   Updated: 2022/05/03 13:31:21 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

class ParamNotFoundExecption : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("Param Not Found");
		}
};

template <typename T>
typename T::iterator easyfind(T& container, int toFind)
{
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it != container.end())
		return it;
	else
		throw ParamNotFoundExecption();
}


#endif