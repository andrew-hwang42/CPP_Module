/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 08:40:50 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 08:49:39 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
public:
	Brain();
	Brain(const Brain& brain);
	Brain& operator=(const Brain &brain);
	~Brain();

private:
	std::string	_ideas[100];
};

#endif
