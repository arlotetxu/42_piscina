/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:23:47 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/06 13:53:09 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	save_a;
	int	save_b;

	save_a = *a;
	save_b = *b;
	*a = save_a / save_b;
	*b = save_a % save_b;
}

int	main()
{
	int	a;
	int	b;

	a = 5;
	b = 3;

	printf("Este es e valor de a: %d\n", a);
	printf("Este es e valor de b: %d\n", b);

	ft_ultimate_div_mod(&a, &b);

	printf("Este es e valor de a: %d\n", a);
	printf("Este es e valor de b: %d\n", b);

}