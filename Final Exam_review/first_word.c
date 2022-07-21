/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 08:38:27 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/21 10:59:19 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* ************************************************************************** */
/* Sacamos el tamaño de la cadena de entrada */
/* ************************************************************************** */
int	ft_str_len(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/* Miramos la cantidad de espacios (isspace) para luego chequear si la cadena es 
solo de espacios */
/* ************************************************************************** */
int	ft_is_blank(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0' && (text[i] == 32 || text[i] == 9))
	{
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/* Sacamos la posicion de la primera y la ultima letra e imprimimos */
/* ************************************************************************** */
void	ft_first_word(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	//printf("incio palabra: %d\n", i);
	
	j = i;
	while(str[j] != '\0' && (!((str[j] >= 9 && str[j] <= 13) || str[j] == 32)))
		j++;
	//printf("fin palabra: %d\n", j);

	while (i < j)
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

/* ************************************************************************** */
/* ************************************************************************** */
int	main(int argc, char **argv)
{	
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	if (ft_str_len(argv[1]) == ft_is_blank(argv[1]))
	{
		ft_putchar('\n');
		return (0);
	}
	ft_first_word(argv[1]);
}
