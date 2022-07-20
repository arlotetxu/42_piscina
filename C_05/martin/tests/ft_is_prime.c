/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:39:40 by mvalient          #+#    #+#             */
/*   Updated: 2022/07/15 11:42:57 by mvalient         ###   ########.fr       */
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

int	main(void)
{	
	printf("1 is prime? %d\n", ft_is_prime(1));
	printf("3 is iprime? %d\n", ft_is_prime(3));
	printf("18 is prime? %d\n", ft_is_prime(18));
	printf("19 is prime? %d\n", ft_is_prime(19));
	return (0);
}
