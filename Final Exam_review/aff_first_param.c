/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:44:19 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/20 18:04:11 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	
		i = 0;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}