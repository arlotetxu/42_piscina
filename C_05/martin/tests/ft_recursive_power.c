/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:48:33 by mvalient          #+#    #+#             */
/*   Updated: 2022/07/19 15:51:46 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

int	main(void)
{
	printf("2^2 = %d\n", ft_recursive_power(2, 2));
	printf("3^3 = %d\n", ft_recursive_power(3, 3));
	printf("4^4 = %d\n", ft_recursive_power(4, 4));
	printf("8^2 = %d\n", ft_recursive_power(8, 2));
	return (0);
}
