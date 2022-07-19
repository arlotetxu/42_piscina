/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:32:56 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/11 17:34:33 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	char s;

		i = 0;
		while (str[i] != '\0')
		{	
			s = str[i];
			if (!((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z')))
			{
				return (0);
			}
			i++;
		}
		return (1);
}

int main()
{
	char text[] = "ertyrey6";
	int returned;

	returned = ft_str_is_alpha(text);
	printf("El valor devuelto es: %d\n", returned);

	return (0);
}