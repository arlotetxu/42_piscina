/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:55:39 by mvalient          #+#    #+#             */
/*   Updated: 2022/07/15 09:13:05 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (0);
}

int	main(void)
{	
	printf("Index 1 : %d\n", ft_fibonacci(1));
	printf("Index 2 : %d\n", ft_fibonacci(2));
	printf("Index 3 : %d\n", ft_fibonacci(3));
	printf("Index 4 : %d\n", ft_fibonacci(4));
	printf("Index 5 : %d\n", ft_fibonacci(5));
	printf("Index 6 : %d\n", ft_fibonacci(6));
	printf("Index 7 : %d\n", ft_fibonacci(7));
	printf("Index 8 : %d\n", ft_fibonacci(8));
	printf("Index 9 : %d\n", ft_fibonacci(9));
	printf("Index 10: %d\n", ft_fibonacci(10));
	return (0);
}
