/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:11 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 17:46:29 by tmartial         ###   ########.fr       */
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
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& other);

		//Overload
		AMateria& operator=(const AMateria& rhs);

		//Destructor
		virtual ~AMateria();

		//Getter
		std::string const & getType() const;

		//Functions
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;
};

#endif