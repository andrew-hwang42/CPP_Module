/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 07:21:52 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 08:09:27 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>


class	WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& wronganimal);
	WrongAnimal& operator=(const WrongAnimal& wronganimal);
	virtual ~WrongAnimal();

	std::string	getType(void) const;
	void		setType(std::string type);
	virtual void		makeSound(void) const;

protected:
	std::string	_type;
};

#endif
