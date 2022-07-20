/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 08:52:26 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/20 14:14:48 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	while (++i < argc - 1)
	{
		j = i;
		
		while (++j < argc)
		{	
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;		
			}
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	
	ft_sort_params(argc, argv);
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
		{
			write(1, &argv[i][j], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}

