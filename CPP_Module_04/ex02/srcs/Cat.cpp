/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 07:22:00 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 08:52:26 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	_brain = new Brain();
	setType("Cat");
}

Cat::Cat(const Cat &cat): Animal(cat)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	_brain = new Brain();
	*this = cat;
}

Cat& Cat::operator=(const Cat &cat)
{
	std::cout << "Cat: Copy assignment called" << std::endl;
	if (this == &cat)
		return (*this);
	Animal::operator=(cat);
	*(this->_brain) = *(cat._brain);
	this->_type = cat._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Cat meowing" << std::endl;
}

Brain*	Cat::get_brain(void)
{
	return (_brain);
}
