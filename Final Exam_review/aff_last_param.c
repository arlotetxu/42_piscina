/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:09:44 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/20 18:19:17 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	
	printf("El numero de argumentos es: %d\n", argc);
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	i = 0;
	while (argv[argc - 1][i] != '\0')
	{
		write(1, &argv[argc - 1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}