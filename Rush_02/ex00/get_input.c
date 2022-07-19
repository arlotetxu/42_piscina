/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:50:13 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/17 15:13:29 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

/*----------------------------------------------------------------------------- 
check the length of the input string parameter */
int	input_len(char *input_string)
{
	unsigned long i;

	i = 0;
	while(input_string[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* ----------------------------------------------------------------------------
Emulating the atoi functionality */

unsigned long ft_atoi(char *input_atoi)
{
	unsigned long i;
	unsigned long n;
	
	i = 0;
	while (input_atoi[i] != '\0')
	{
		if (!(input_atoi[i] >= 48 && input_atoi[i] <= 57))
			i++;
		else break;
	}
	n = 0;
	while (input_atoi[i] >= 48 && input_atoi[i] <= 57)
	{
		n = n * 10 + (input_atoi[i] - '0');
		i++;
	}
	return (n);
}

/* ----------------------------------------------------------------------------
Get the lenth of the input string from the "input_len" function.
Convert the input string in integer values (atoi) and save them in a new
array (digits) with dinamic length. */

int	*convert_input_int (char **input)
{
	unsigned long string_len;
	unsigned long input_string_i;
	int digit;
	unsigned long i;
	int aux;
	
	string_len = input_len (&input[1][0]);
	aux = string_len;
	int *digits;
	digits = malloc(sizeof(unsigned long) * string_len);
	input_string_i = ft_atoi(&input[1][0]);

	i = 0;
	while(input_string_i > 0)
	{
		digit = input_string_i % 10;
		digits[aux - 1] = digit;
		input_string_i = input_string_i /10;
		aux--;
	}
	i = 0;
	while (i < string_len)
	{
		printf("%i", digits[i]);
		i++;
	}
	//free(digits);
	return (digits);
}

/* ----------------------------------------------------------------------------
*/
int main (int argc, char **argv)
{
	(void)argc;
	
	convert_input_int(argv);
	return (0);
}