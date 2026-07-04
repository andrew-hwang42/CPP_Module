/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 07:21:41 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 07:31:04 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &wrongcat): WrongAnimal(wrongcat)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	*this = wrongcat;
}

WrongCat& WrongCat::operator=(const WrongCat &wrongcat)
{
	std::cout << "WrongCat: Copy assignment called" << std::endl;
	if (this == &wrongcat)
		return (*this);
	WrongAnimal::operator=(wrongcat);
	this->_type = wrongcat._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: Cat barking" << std::endl;
}
