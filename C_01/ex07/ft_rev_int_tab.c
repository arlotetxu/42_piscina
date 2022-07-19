/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:09:51 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/08 13:05:19 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int save;
	int size_;

	size_ = size;
	i = 0;
	while (size-1 >= (size_/2))
	{
		save = tab[size-1];
		tab[size-1] = tab[i];
		tab[i] = save;
		
		i++;
		size--;
	}
}


int main()
{
	int	size = 9;
	int	list[] = {7, 38, 9, 10, 11, 25, 42, 55, 98};

	ft_rev_int_tab(list, size);
	printf("%d %d %d %d %d %d %d %d %d", list[0], list[1], list[2], list[3], list[4], list[5], list[6], list[7], list[8]);
}