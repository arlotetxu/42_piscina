/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:30:26 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/12 15:05:33 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';

	return (dest);
}

int main()
{
	char origin[]="Esto es un texto";
	char destiny[] = "_";
	unsigned int n = 2;
	int i;

	ft_strlcpy(destiny, origin, n);
	i = 0;
	while(destiny[i] != '\0')
	{
		write(1, &destiny[i], 1);
		i++;
	}
	return(0);
}