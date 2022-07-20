/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:15:19 by mvalient          #+#    #+#             */
/*   Updated: 2022/07/19 15:55:59 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{	
	printf("SQRT 16: %d\n", ft_sqrt(16));
	printf("SQRT 25: %d\n", ft_sqrt(25));
	printf("SQRT 64: %d\n", ft_sqrt(64));
	printf("SQRT -1: %d\n", ft_sqrt(-1));
	printf("SQRT 0: %d\n", ft_sqrt(0));
	printf("SQRT 2423423: %d\n", ft_sqrt(2423423));
	printf("SQRT 234423: %d\n", ft_sqrt(234423));
	printf("SQRT 2342: %d\n", ft_sqrt(2342));
	printf("SQRT 1: %d\n", ft_sqrt(1));
	return (0);
}
