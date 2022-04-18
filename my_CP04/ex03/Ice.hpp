/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:03:14 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 12:31:12 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>

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