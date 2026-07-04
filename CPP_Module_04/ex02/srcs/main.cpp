/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 07:31:50 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 09:47:05 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
#include "../incs/WrongAnimal.hpp"
#include "../incs/WrongCat.hpp"
#include <iomanip>

# define CYAN			"\x1b[36m"
# define YELLOW			"\x1b[33m"
# define BLACK			"\x1b[0m"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Argument error" << std::endl;
		return (1);
	}

	/* Using Animal object directly: compile error */
	// std::cout << CYAN
	// 	<< "Animal test: animal sound should be printed"
	// 	<< BLACK << std::endl << std::endl;
	// {
	// 	Animal animal;
	// 	std::cout << YELLOW << "type: " << animal.getType() << "\nsound: ";
	// 	animal.makeSound();
	// 	std::cout << BLACK;
	// }
	// std::cout << std::endl;
	// {
	// 	const Animal* new_animal = new Animal();
	// 	std::cout << YELLOW << "type: " << new_animal->getType() << "\nsound: ";
	// 	new_animal->makeSound();
	// 	std::cout << BLACK;
	// 	delete new_animal;
	// }

	std::cout << std::endl << CYAN
		<< "Dog test: dog sound should be printed"
		<< BLACK << std::endl << std::endl;
	{
		Dog dog;
		std::cout << YELLOW << "type: " << dog.getType() << "\nsound: ";
		dog.makeSound();
		std::cout << BLACK;
	}
	std::cout << std::endl;
	{
		const Animal* new_dog = new Dog();
		std::cout << YELLOW << "type: " << new_dog->getType() << "\nsound: ";
		new_dog->makeSound();
		std::cout << BLACK;
		delete new_dog;
	}

	std::cout << std::endl << CYAN
		<< "Cat test: cat sound should be printed"
		<< BLACK << std::endl << std::endl;
	{
		Cat cat;
		std::cout << YELLOW << "type: " << cat.getType() << "\nsound: ";
		cat.makeSound();
		std::cout << BLACK;
	}
	std::cout << std::endl;
	{
		const Animal* new_cat = new Cat();
		std::cout << YELLOW << "type: " << new_cat->getType() << "\nsound: ";
		new_cat->makeSound();
		std::cout << BLACK;
		delete new_cat;
	}
	return (0);
}
