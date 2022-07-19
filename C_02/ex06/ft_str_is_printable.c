/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:16:46 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/12 09:03:23 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	s;

	i = 0;
	while (str[i] != '\0')
	{	
		s = str[i];
		if (!(s >= 32 && s <= 126))
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
	char	*text = "kjdsfhHsjdh☀︎";
	int returned;

	returned = ft_str_is_printable(text);
	printf("El valor devuelto es: %d\n", returned);
}