/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 07:21:47 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 09:43:50 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
public:
	Animal();
	Animal(const Animal& animal);
	Animal& operator=(const Animal& animal);
	virtual ~Animal();

	std::string	getType(void) const;
	void		setType(std::string type);
	virtual void		makeSound(void) const = 0;

protected:
	std::string	_type;
};

#endif
