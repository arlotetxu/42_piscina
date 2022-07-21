/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:55:43 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/20 16:14:33 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


int main()
{
	char origin[]="Es";
	char destiny[] = "lk";
	unsigned int n = 4;
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