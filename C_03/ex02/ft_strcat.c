/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:49:50 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/14 12:46:16 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src)

{
	int	i;
	int	j;

	i = 0;
	while(dest[i] !='\0')
	{
		i++;
	}
	j = 0;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


int main()
{
	char text1[] = "Esto es el origen. y añado muchos mas caracteres para hacer la comprobacion";
	char text2[200] = "Esto es el destino";
	//int i;

	char *check1 = strcat(text2, text1);
	printf("Original: %s\n", check1);

	char text_o_m[] = "Esto es el origen.sfgsdbnfghfdhdfghghjfghjflksdjfhglkjsdhfglkjsdfhghjfghjfghjfgdffgsdfg";
	char text_d_m[200] = "Esto es el.";
	char *check2 = ft_strcat(text_d_m, text_o_m);
	printf("Funcion: %s\n", check2);

	/*i = 0;
	while (check1[i] != '\0')
	{
		write(1, &check1[i], 1);
		i++;
	}*/

	return (0);
}