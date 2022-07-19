/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_completo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 09:42:08 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/03 12:29:56 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char i)
{
	write(1, &i, 1);
}

void	prim_ult_linea(x, y)
{
	int		cont_x;
	int		cont_y;
	char	caracter;

	cont_y = 1;
	cont_x = 1;
	while (cont_y <= y)
	{
		while (cont_x <= x)
		{
			if (cont_x == 1 || cont_x == x)
				caracter = 'o';
			else
				caracter = '-';
			cont_x++;
			ft_putchar(caracter);
		}			
	cont_y++;
	}
	ft_putchar('\n');
}

void	lineas_medio(x, y)
{
	int		cont_x;
	int		cont_y;
	char	caracter;

	cont_y = 1;
	while (cont_y < y - 1)
	{
		cont_x = 1;
		while (cont_x <= x)
		{
			if (cont_x == 1 || cont_x == x)
				caracter = '|';
			else
				caracter = ' ';
			cont_x++;
			ft_putchar(caracter);
		}
		ft_putchar('\n');
		cont_y++;
	}
}

void	rush(int x, int y)
{
	prim_ult_linea(x, y);
	lineas_medio(x, y);
	prim_ult_linea(x, y);
}

int	main(void)
{
	rush (2, 2);
	return (0);
}
