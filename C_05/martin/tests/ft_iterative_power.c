/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:39:32 by mvalient          #+#    #+#             */
/*   Updated: 2022/07/19 15:50:11 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ < power)
		res = res * nb;
	return (res);
}

int	main(void)
{
	printf("2^2 = %d\n", ft_iterative_power(2, 2));
	printf("3^3 = %d\n", ft_iterative_power(3, 3));
	printf("4^4 = %d\n", ft_iterative_power(4, 4));
	printf("8^2 = %d\n", ft_iterative_power(8, 2));
	return (0);
}
