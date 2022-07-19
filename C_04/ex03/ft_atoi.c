/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:09:07 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/19 14:13:36 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r'))
	{
		i++;
	}
	//printf("El valor de i tras espacios: %d\n", i);
	sign = 1;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	//printf("El valor de i tras signos: %d\n", i);
	n = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}


int main()
{
	int retorno;
	int test;
	retorno = ft_atoi("   c    ---+--+1234ab567");
	printf("%d", retorno);
	
	test = atoi
	
}