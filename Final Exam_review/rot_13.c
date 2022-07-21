/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:37:03 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/21 17:08:35 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') 
				|| (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
				{
					argv[1][i] = argv[1][i] + 13;
				}
			else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z')
				|| (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
				{
					argv[1][i] = argv[1][i] - 13;
				}
			else
				argv[1][i] = argv[1][i];
			
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');	
}
