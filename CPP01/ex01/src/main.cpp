/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:15:32 by apregitz          #+#    #+#             */
/*   Updated: 2025/09/24 14:19:41 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	n = 3;

	Zombie*	zombies = zombieHorde(n, "Gustav");
	for (int i = 0; i < n; ++i)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}
