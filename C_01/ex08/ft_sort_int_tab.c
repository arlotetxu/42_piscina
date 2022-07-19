/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:44:55 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/08 13:07:28 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int save;

	i = 0;
	while (i < size -1)
	{
		if (tab[i] > tab[i + 1])
		{
			save = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = save;
		
			//i++;
			i = 0;
		}
		else
		i++;
	}
}


int main()
{
	int	size = 10;
	int	list[]= {12, 7, 9, 1, 11, 98, 55, 33, 2, 12};

	ft_sort_int_tab(list, size);
	printf("%d %d %d %d %d %d %d %d %d %d", list[0], list[1], list[2], list[3], list[4], list[5], list[6], list[7], list[8], list[9]);
}