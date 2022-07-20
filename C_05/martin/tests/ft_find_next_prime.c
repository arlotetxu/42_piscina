/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:40:44 by mvalient          #+#    #+#             */
/*   Updated: 2022/07/15 11:41:28 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (nb == i)
	{
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while (nb < 214748647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}

int	main(void)
{
	printf("1, next prime is: %d\n", ft_find_next_prime(1));
	printf("6, next prime is: %d\n", ft_find_next_prime(6));
	printf("3, next prime is: %d\n", ft_find_next_prime(3));
	printf("12, next prime is: %d\n", ft_find_next_prime(12));
	printf("40, next prime is: %d\n", ft_find_next_prime(40));
	printf("120, next prime is: %d\n", ft_find_next_prime(120));
	printf("431, next prime is: %d\n", ft_find_next_prime(431));
	return (0);
}
