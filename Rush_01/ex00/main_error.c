/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:39:13 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/10 13:55:45 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
/* Inputs checks

- arguments number == 2 --> argc == 2
- character number == 31
- characters == 1,2,3,4,_
*/

int main (int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		write(2, "Error\n", 6);
	}
	else
	{
		if (argv[1][31] != '\0')
		{
			write(2, "Error\n", 6);
		}

		else
		{
			i = 0;
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] != '1' || argv[1][i] != '2' || argv[1][i] != '3' || argv[1][i] != '4' || argv[1][i] != ' ')
				{
					write(2, "Error\n", 6);
					break;
				}
			i++;
			}
		
		}
		i = 0;
		while (argv[1][i] != '\0')
		{
		//printf("%s", argv[i]);
		write(1, &argv[1][i], 1);
		i++;
		}
	}

	return (0);
}