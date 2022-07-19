/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:32:56 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/11 18:10:30 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;
	char s;

		i = 0;
		while (str[i] != '\0')
		{	
			s = str[i];
			if (!(s >= '0' && s <= '9'))
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
	char	*text = "";
	int returned;

	returned = ft_str_is_numeric(text);
	printf("El valor devuelto es: %d\n", returned);
}