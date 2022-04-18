/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:06:45 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 12:27:43 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	// Constructors
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	
	// Assignment operator overload
	MateriaSource& operator=(const MateriaSource& rhs);

	// Destructor
	~MateriaSource();

	void learnMateria(AMateria* m);
	AMateria* createMateria(const std::string& type);

private:

	AMateria* _materia[4];
};



#endif