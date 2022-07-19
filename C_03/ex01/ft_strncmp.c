/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:12:39 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/14 14:20:55 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}


int main()
{
	char text1[] = "AEE ";
	char text2[] = "AEE";
	int n = 5;
	unsigned int check;
	unsigned int check2;

	check = strncmp(text1, text2, n);
	printf("Original: %d\n", check);


	char text1_m[] = "AEE ";
	char text2_m[] = "AEE";
	check2 = ft_strncmp(text1_m, text2_m, n);
	printf("Funcion: %d\n", check2);

	return (0);
}