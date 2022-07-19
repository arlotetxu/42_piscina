/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:39:38 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/06 10:44:17 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int n = 21;
	int *pointer1;
	int **pointer2;
	int ***pointer3;
	int ****pointer4;
	int *****pointer5;
	int ******pointer6;
	int *******pointer7;
	int ********pointer8;
	int *********pointer9;


	pointer1 = &n;
	pointer2 = &pointer1;
	pointer3 = &pointer2;
	pointer4 = &pointer3;
	pointer5 = &pointer4;
	pointer6 = &pointer5;
	pointer7 = &pointer6;
	pointer8 = &pointer7;
	pointer9 = &pointer8;

	printf("Este es el valor de n antes: %d\n", n);
	ft_ultimate_ft(pointer9);
	printf("Este es el valor de n despues: %d\n", n);

}