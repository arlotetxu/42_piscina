/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:11:04 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/12 12:17:10 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	
	if (str[0] >= 97 && str[0] <= 122)
	str[0] = str[0] - 32;

	i = 1;
	while(str[i]-1 != '\0')
	{
		if(!(str[i - 1] >= '0' && str[i - 1] <= '9') // no esta entre 0 y 9
		&& (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')) // no esta entre a y z
		&& (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
		&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}


int main()
{
	char text[63] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(text));

	return (0);
}