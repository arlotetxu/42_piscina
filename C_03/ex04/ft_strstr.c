/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:29:59 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/13 15:54:02 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>



char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	if (to_find[0] == '\0')
	return(str);
	
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while(str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}


int main()
{
	char text_o[] = "Buscando una aguja en un pajar";
	char busca[] = "un";

	char *check_1 = strstr(text_o, busca);
	printf("Main: %s\n", check_1);

	char *check_2 = ft_strstr(text_o, busca);
	printf("Funcion: %s\n", check_2);

	return (0);

}