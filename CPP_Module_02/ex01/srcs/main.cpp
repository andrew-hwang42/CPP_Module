/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:44:13 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 21:42:15 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Error: Argument error" << std::endl;
		return (1);
	}
	
	Fixed a;

	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	// std::cout << "a is " << a.toFloat() << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return (0);
}
