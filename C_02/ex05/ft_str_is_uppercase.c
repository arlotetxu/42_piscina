/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlo <arlo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:14:24 by arlo              #+#    #+#             */
/*   Updated: 2022/07/11 21:22:08 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;
	char s;

		i = 0;
		while (str[i] != '\0')
		{	
			s = str[i];
			if (!(s >= 'A' && s <= 'Z'))
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

	returned = ft_str_is_uppercase(text);
	printf("El valor devuelto es: %d\n", returned);
}