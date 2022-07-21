/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:28:12 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/21 14:34:14 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int save;

	save = *a;
	*a = *b;
	*b = save;
}

int	main()
{
	int one;
	int two;

	one = 15;
	two = 7;

	printf("Before the one value is: %d\n", one);
	printf("Before the two value is: %d\n", two);

	ft_swap(&one, &two);

	printf("Now the one value is: %d\n", one);
	printf("Now the two value is: %d\n", two);
}