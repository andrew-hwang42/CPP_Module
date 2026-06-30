/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 00:19:44 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 00:19:45 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
	else
	{
		argv++;
		while (*argv)
		{
			while (**argv)
			{
				if (97 <= **argv && **argv <= 122)
					**argv =  **argv - 32;
				std::cout << **argv;
				(*argv)++;
			}
			argv++;
		}
		std::cout << std::endl;
	}
	return (0);
}
