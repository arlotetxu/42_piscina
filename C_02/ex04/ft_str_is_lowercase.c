/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:16:46 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/11 18:20:08 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;
	char s;

		i = 0;
		while (str[i] != '\0')
		{	
			s = str[i];
			if (!(s >= 'a' && s <= 'z'))
			{
				return (0);
			}
			i++;
		}
	return (1);
}

int main(void)
{
	//char text[] = "";
	char	*text = "kjdsfhgLsjdh";
	int returned;

	returned = ft_str_is_lowercase(text);
	printf("El valor devuelto es: %d\n", returned);
}