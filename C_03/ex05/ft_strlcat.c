/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:59:49 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/13 18:17:41 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
	/*
	- si la cadena destino es menor que la origen: tamaño de origen + tamaño destino
	- si la cadena de destino es mayot que origen: tamaño de la cadena de origen + n -1
	- si la cadena de destino es null: tamaño de origen -1;
	*/

/*unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{

}*/




int main()
{
	char text_o[] = "origen";
	char text_d[] = "Este e";
	unsigned int n = 7;

	unsigned int check_1 = strlcat(text_d, text_o, n); // tamaño de la cadena de origen + n -1
	printf("Original: %d\n", check_1);

	printf("%s\n", text_d);
	printf("%s\n", text_o);

	/*unsigned int check_2 = ft_strlcat(text_d, text_o, n);
	printf("Funcion: %d\n", check_2);*/

	return (0);
}