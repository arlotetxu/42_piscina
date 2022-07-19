/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:56:54 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/18 18:06:45 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void check_spaces(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' || (str[i] == '+' || str[i]== '-'))
	{
		//printf("He entrado en el bucle");
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
			{
				//printf("1");
				i++;
				//break;	
			}
			
		else break;
	}

	printf("Fuera del while\n");
	printf("I: %d\n", i);
}


/*int	ft_atoi(char *str)
{
	int i;

	i = 0;
	


	
}*/

int main()
{
	check_spaces("  a  ---+--+1234ab567");
}