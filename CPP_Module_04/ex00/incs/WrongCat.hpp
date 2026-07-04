/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 07:21:54 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 08:10:03 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <iostream>
#include <string>
#include "./WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& wrongcat);
	WrongCat& operator=(const WrongCat& wrongcat);
	~WrongCat();

	virtual void	makeSound(void) const;
};

#endif
