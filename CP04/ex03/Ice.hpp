/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:03:14 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/19 16:56:58 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		// Constructors
		Ice();
		Ice(const Ice& other);

		// Assignment operator overload
		Ice& operator=(const Ice& rhs);

		// Destructor
		~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif