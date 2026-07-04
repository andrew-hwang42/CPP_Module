/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 07:22:02 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 09:07:06 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	_brain = new Brain();
	setType("Dog");
}

Dog::Dog(const Dog& dog): Animal(dog)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	_brain = new Brain();
	*this = dog;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (this == &dog)
		return (*this);
	Animal::operator=(dog);
	*(this->_brain) = *(dog._brain);
	this->_type = dog._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Dog barking" << std::endl;
}

Brain*	Dog::get_brain(void)
{
	return (_brain);
}
