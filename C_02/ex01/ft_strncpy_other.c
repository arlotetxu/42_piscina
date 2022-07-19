/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:55:43 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/11 14:43:23 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int num_lines_text(char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}


char 	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = num_lines_text(src);

	// si la cadena que se pide es mayor que el texto, se debe mostrar el texto completo unicamente
	if (n > i)
	{
		j = 0;
		while (j < i)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}

	// si la cadena que se pide es menor que el texto, se deben coger solo los caracteres solicitados y el resto deben
	// ser espacios.
	else
	{
		j = 0;
		while(j < n)
		{
			dest[j] = src[j];
			j++;

		}
		while(n < i)
		{
			dest[n] = '\0';
			n++;
		}
		//dest[j] = '\0';
	}


	return(dest);
}


int main()
{
	char origin[]="Esto es un texto";
	char destiny[] = "_";
	unsigned int n = 50;
	int i;

	ft_strncpy(destiny, origin, n);
	i = 0;
	while(destiny[i] != '\0')
	{
		write(1, &destiny[i], 1);
		i++;
	}
	return(0);
}