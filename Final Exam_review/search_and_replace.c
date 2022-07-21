/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:23:07 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/21 17:49:25 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	str_len(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if ((argc == 4) && (str_len(argv[2]) == 1) && (str_len(argv[3]) == 1))
	{	
		//i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];
			}
			
			ft_putchar(argv[1][i]);
			
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}