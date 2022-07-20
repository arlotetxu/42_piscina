/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:52:06 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/20 14:26:11 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;

}

int	main()
{

int	a;
int	b;
int	pointer1;
int	pointer2;

a = 5;
b = 3;
//pointer1 = 0;
//pointer2 = 0;


printf("El valor de a antes es: %d\n", a);
printf("El valor de b antes es: %d\n", b);
ft_div_mod(a, b, &pointer1, &pointer2);
printf("El valor de div despues es: %d\n", pointer1);
printf("El valor de mod despues es: %d\n", pointer2);
printf("El valor de a despues es: %d\n", a);
printf("El valor de b despues es: %d\n", b);
}