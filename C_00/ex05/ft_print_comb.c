/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:09:09 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/04 15:16:27 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char num_char1, char num_char2, char num_char3)
{
	write(1, &num_char1, 1);
	write(1, &num_char2, 1);
	write(1, &num_char3, 1);
	if (!(num_char1 == '7' && num_char2 == '8' && num_char3 == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	numb_char1;
	char	numb_char2;
	char	numb_char3;

	numb_char1 = '0';
	while (numb_char1 <= '7')
	{
		numb_char2 = numb_char1 + 1;
		while (numb_char2 <= '8')
		{
			numb_char3 = numb_char2 + 1;
			while (numb_char3 <= '9')
			{
				ft_putchar(numb_char1, numb_char2, numb_char3);
				numb_char3++;
			}
		numb_char2++;
		}
	numb_char1++;
	}
}

int	main(void)
{
	ft_print_comb(void);
	return (0);
}
