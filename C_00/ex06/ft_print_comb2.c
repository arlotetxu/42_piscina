/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:57:27 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/05 13:12:53 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	if (((c * 10) + d) > ((a * 10) + b))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (!(a == '9' && b == '8' && c == '9' && d == '9'))
			write(1, ", ", 2);
	}
}

void	last_while_print(char num_char1, char num_char2, char num_char3)
{
	char	num_char4;

	num_char4 = '1';
	while (num_char4 <= '9')
	{
		ft_putchar(num_char1, num_char2, num_char3, num_char4);
		num_char4++;
	}
}

void	ft_print_comb2(void)
{
	char	num_char1;
	char	num_char2;
	char	num_char3;

	num_char1 = '0';
	while (num_char1 <= '9')
	{
		num_char2 = '0';
		while (num_char2 <= '8')
		{
			num_char3 = '0';
			while (num_char3 <= '9')
			{
				last_while_print(num_char1, num_char2, num_char3);
				num_char3++;
			}
			num_char2++;
		}
		num_char1++;
	}
}
