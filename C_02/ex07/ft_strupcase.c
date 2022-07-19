/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:04:37 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/12 10:34:30 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}


int main()
{
	//char text[] = "";
	char	text[12] = "kjdsfhHsjdh";
	//int	j;

	//returned = *ft_strupcase(text);
	printf("El valor devuelto es: %s\n", ft_strupcase(text));
	/*j = 0;
	while (returned[j] != '\0')
	{
		write(1, &returned[j], 1);
		j++;
	}*/
	//ft_strupcase(text);
return (0);
}