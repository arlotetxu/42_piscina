/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:35:38 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/06 17:45:57 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		//write(1, &str[counter], 1);
		counter++;
	}
	return (counter);
}



int	main()
{
	char	*message;
	int	counter2;
	message = "Hello jfjfjfjfjfj";
	counter2 = ft_strlen(message);
	
	printf("El numero de caracteres es: %d", counter2);
	return (0);
}