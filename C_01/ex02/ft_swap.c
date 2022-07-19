/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:19:06 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/08 14:35:43 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int*b)
{
	int save;
	save = *a;

	*a = *b;
	*b = save;
}


int main()
{
	int x;
	int y;
	//int *pointer1;
	//int *pointer2;

	x = 21;
	y = 22;

	//pointer1 = &x;
	//pointer2 = &y;

	printf("El valor de x antes: %d\n", x);
	printf("El valor de y antes: %d\n", y);
	ft_swap(&x, &y);
	printf("El valor de x despues: %d\n", x);
	printf("El valor de y despues: %d\n", y);
}