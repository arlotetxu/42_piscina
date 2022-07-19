/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:06:52 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/15 10:23:50 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	text_o[] = "Esto es el origen.sfg";
	char	text_d[200] = "Esto es el destino.";
	unsigned int	n = 100;

	char *check_1 = strncat(text_d, text_o, n);
	printf("Original: %s\n", check_1);

	char text_o_m[] = "Esto es el origen.sfg";
	char text_d_m[50] = "Esto es el.";
	char *check_2 = ft_strncat(text_d_m, text_o_m, n);
	printf("Funcion: %s\n", check_2);

	return (0);
}