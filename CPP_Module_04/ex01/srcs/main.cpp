/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 07:31:50 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 09:43:08 by ahwang           ###   ########.fr       */
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

	std::cout << CYAN
		<< "test 01: array of animal"
		<< BLACK << std::endl << std::endl;
	{
		int	n = 10;
		Animal	*animal[n];
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
				animal[i] = new Dog();
			else
				animal[i] = new Cat();
		}
		for (int i = 0; i < n; i++)
		{
			std::cout << YELLOW
				<< "[" << i + 1 << "] type: " << animal[i]->getType()
				<< "\nsound: ";
				animal[i]->makeSound();
				std::cout << BLACK;
		}
		for (int i = 0; i < n; i++)
			delete animal[i];
	}

	std::cout << std::endl << CYAN
		<< "test 02: deep copy"
		<< BLACK << std::endl << std::endl;
	{
		Dog	dog_1;
		Dog	dog_2 = dog_1;

		std::cout << std::endl << "idx | "
			<< YELLOW << "dog_1 brain\t| "
			<< CYAN << "dog_2 brain\t" << BLACK << std::endl;
		for (int i = 0; i < 100; i++)
			std::cout << std::setw(3) << i + 1 << " | "
				<< YELLOW << dog_1.get_brain() + i << "\t\t| "
				<< CYAN << dog_2.get_brain() + i << BLACK << std::endl;
		std::cout << BLACK << std::endl;
	}
	std::cout << std::endl;
	{
		Cat	cat_1;
		Cat	cat_2;
		cat_1 = cat_2;

		std::cout << std::endl << "idx | "
			<< YELLOW << "cat_1 brain\t| "
			<< CYAN << "cat_2 brain\t" << BLACK << std::endl;
		for (int i = 0; i < 100; i++)
			std::cout << std::setw(3) << i + 1 << " | "
				<< YELLOW << cat_1.get_brain() + i << "\t\t| "
				<< CYAN << cat_2.get_brain() + i << BLACK << std::endl;
		std::cout << BLACK << std::endl;
	}
	return (0);
}
