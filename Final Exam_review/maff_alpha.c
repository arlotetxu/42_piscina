/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:00:20 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/20 19:14:29 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(int i)
{
	write(1, &i, 1);
}


int	main()
{
	char	c;
	int		i;

	i = 1;
	c = 'a';
	while(c <= 'z')
	{
		if (i%2 == 0)
			ft_putchar(c - 32);
			
		else
			ft_putchar(c);
		
		c++;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}