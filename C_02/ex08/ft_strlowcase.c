/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:47:54 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/12 16:26:01 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}


int main()
{
	//char text[] = "";
	char	text[12] = "kjdsfhHsjdhH";
	//int	j;

	//returned = *ft_strupcase(text);
	printf("El valor devuelto es: %s\n", ft_strlowcase(text));
	/*j = 0;
	while (returned[j] != '\0')
	{
		write(1, &returned[j], 1);
		j++;
	}*/
	//ft_strupcase(text);
return (0);
}