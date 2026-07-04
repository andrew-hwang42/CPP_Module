/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 07:21:49 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 07:34:57 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "./Animal.hpp"

class	Dog: public Animal
{
public:
	Dog();
	Dog(const Dog& dog);
	Dog& operator=(const Dog& dog);
	~Dog();

	virtual void	makeSound(void) const;
};

#endif
