/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:49:47 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/21 16:23:57 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int	main(int argc, char **argv)
{
	//int i;
	int len;

	
	if (argc ==2)
	{
		//i = 0;
		len = ft_strlen(argv[1]);
		printf("valor de len: %d\n", len);
		while(len - 1 >= 0)
		{
			ft_putchar(argv[1][len - 1]);
			len--;
			//i++;
		}
	}
	ft_putchar('\n');
}