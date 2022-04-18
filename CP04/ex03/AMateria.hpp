/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:11 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 11:01:59 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	public:
		//Constructor
		AMateria(std::string const & type);
		AMateria(const AMateria& other);

		//Overload
		AMateria& operator=(const AMateria& rhs);

		//Destructor
		virtual ~AMateria();

		//Getter
		std::string const & getType() const; //Returns the materia type

		//Functions
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;
};

#endif