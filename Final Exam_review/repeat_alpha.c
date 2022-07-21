/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:37:21 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/21 15:46:19 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int	main(int argc, char **argv)
{
	int rep;
	int i;
	int j;

	/*if (argc != 2 || )
		ft_putchar('\n')

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			rep = argv[1][i] - 97 + 1;
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			rep = argv[1][i] - 65 + 1;

		j = 0;
		while (j < rep)
		{
			ft_putchar(argv[1][i]);
			j++;
		}
		i++;
	}*/

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				rep = argv[1][i] - 97 + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				rep = argv[1][i] - 65 + 1;
			else
				rep = 1;

			j = 0;
			while (j < rep)
			{
				ft_putchar(argv[1][i]);
				j++;
			}
			i++;
		}	
	}
	ft_putchar('\n');
}