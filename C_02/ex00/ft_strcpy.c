/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:21:46 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/11 11:47:59 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
char 	*ft_strcpy(char *dest, char *src)
{
	int j;

	j = 0;
	while(src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return(dest);
}


int main()
{
	char origin[]="Esto es un texto";
	char destiny[] = "_";
	int i;

	ft_strcpy(destiny, origin);
	i = 0;
	while(destiny[i] != '\0')
	{
		write(1, &destiny[i], 1);
		i++;
	}
	return(0);
}