/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 08:53:57 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/04 09:53:10 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	num_;

	num_ = 0 + '0';
	while (num_ <= '9')
	{
		write(1, &num_, 1);
		num_++;
	}
}

int	main(void)
{
	ft_print_numbers ();
	return (0);
}
