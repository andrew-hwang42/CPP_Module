/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 07:21:57 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 07:25:41 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal: Copy assignment operator called" << std::endl;
	if (this == &animal)
		return (*this);
	this->_type = animal._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::setType(std::string type)
{
	_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal: I'm a animal" << std::endl;
}
