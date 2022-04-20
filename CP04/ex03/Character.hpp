/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:26 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/19 16:56:31 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		//Constructor
		Character();
		Character(std::string name);
		Character(const Character& src);

		//Destructor
		~Character();

		//Overload
		Character& operator=(const Character& rhs);

		//Getters
		std::string const & getName() const;

		//Functions
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	protected:
		std::string _name;
		AMateria* _materia[4];
};


#endif