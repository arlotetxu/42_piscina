/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:05:17 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/15 14:25:16 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return(s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}


int main()
{
	char text1[] = "Eeeyy  ";
	char text2[] = "Zeeyy";
	//int check;
	//int check2;

	//check = strcmp(text1, text2);

	printf("La diferencia (original) es de %d\n", strcmp(text1, text2));

	char text1_m[] = "Eeeyy  ";
	char text2_m[] = "Zeeyy";
	//check2 = ft_strcmp(text1, text2);
	printf("La diferencia (funcion) es de %d\n", ft_strcmp(text1_m, text2_m));


	return (0);


}