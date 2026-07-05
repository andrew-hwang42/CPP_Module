/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:52:27 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/05 01:46:31 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Arument error" << std::endl;
		return (1);
	}

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

// 	std::cout << "=============" << std::endl;
// 	Fixed c(Fixed(3) / Fixed(0));
// 	Fixed d(Fixed(3) / Fixed(-1));
// 	std::cout << d << std::endl;

	
// 	std::cout << "=============" << std::endl;
// 	Fixed e(3);
// 	Fixed f(3);
// 	Fixed g(3.1f);
// 	if (e == f)
// 		std::cout << "e == f" << std::endl;
// 	if (e != f)
// 		std::cout << "e != f" << std::endl;
// 	if (e < f)
// 		std::cout << "e < f" << std::endl;
// 	if (e <= f)
// 		std::cout << "e <= f" << std::endl;
// 	if (e < g)
// 		std::cout << "e < g" << std::endl;
// 	if (e <= g)
// 		std::cout << "e <= g" << std::endl;
 	return (0);
}
