/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:08:26 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/14 15:13:25 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main()
{
	char texto[] = "Esto es un texto";

	printf("Original: %lu\n", strlen(texto));
	printf("Funcion: %d\n", ft_strlen(texto));

	return(0);
}