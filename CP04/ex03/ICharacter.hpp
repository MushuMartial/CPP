/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:06:45 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/19 17:18:45 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
//# include "Character.hpp"

class AMateria;

class ICharacter
{
	public:
		//Destructor
		virtual ~ICharacter() {}
		//Getter
		virtual std::string const & getName() const = 0;
		//Functions
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};


#endif