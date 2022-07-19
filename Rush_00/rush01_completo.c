/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_completo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:04:43 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/03 13:27:01 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char i)
{
	write(1, &i, 1);
}

void	first_line(x, y)
{
	int		count_x;
	char	char_imp;

	count_x = 1;
	while (count_x <= x)
	{
		if (count_x == 1)
			char_imp = '/';
		else if (count_x == x)
			char_imp = 92;
		else
			char_imp = '*';
		count_x++;
		ft_putchar(char_imp);
	}
	ft_putchar('\n');
}

void	mid_line(x, y)
{
	int		count_x;
	int		count_y;
	char	char_imp;

	count_y = 1;
	while (count_y < y - 1)
	{
		count_x = 1;
		while (count_x <= x)
		{
			if (count_x == 1 || count_x == x)
				char_imp = '*';
			else
				char_imp = ' ';
			count_x++;
			ft_putchar(char_imp);
		}
		ft_putchar('\n');
		count_y++;
	}
}

void	last_line(x, y)
{
	int		count_x;
	char	char_imp;

	count_x = 1;
	while (count_x <= x)
	{
		if (count_x == 1)
			char_imp = 92;
		else if (count_x == x)
			char_imp = '/';
		else
			char_imp = '*';
		count_x++;
		ft_putchar(char_imp);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	first_line(x);
	mid_line(x, y);
	last_line(x);
}

int	main(void)
{
	rush (7, 3);
	return (0);
}
