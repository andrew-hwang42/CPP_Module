/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 01:56:07 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 02:02:05 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>
#include <sstream>
#include "./Zombie.hpp"

Zombie		*zombieHorde(int N, std::string name);
Zombie		*newZombie(std::string name);
int		main(int argc, char **argv);

#endif
