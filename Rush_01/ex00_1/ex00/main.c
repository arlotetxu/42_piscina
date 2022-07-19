/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroca-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:06:43 by aroca-pa          #+#    #+#             */
/*   Updated: 2022/07/10 11:15:15 by aroca-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    value_matrix(int *numbers);

int	main(void)
{
int numbers[] = {1, 2, 3, 4};
// int n;
// n = 4;
value_matrix(numbers);
return (0);
}
