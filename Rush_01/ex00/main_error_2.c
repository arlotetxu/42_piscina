/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_error_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:14:07 by jflorido          #+#    #+#             */
/*   Updated: 2022/07/10 16:08:55 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

/*	1 is ok
	0 is nok */

/* check if there are more than 2 arguments */
int arg_number(int arg_number)
{
	int checker;

	checker = 0;
	if (arg_number != 2)
	{
		write(2, "Error\n", 6);
	}
	else
		checker = 1;
	
	return(checker);
}

/* check if there is a NULL in the 31 position */
int arg_31(char *list)
{
	int i;

	i = 0;
	while (list[i] != '\0')
	{
		write(1, &list[i], 1);
		i++;
	}

	//write(1, &list[33], 1);
	/*int checker_2;
	
	if(list[31] != '\0')
		checker_2 = 0;
	else
		checker_2 = 1;*/

	return(0);

}


int main (int argc, char *argv[])
//int main (int argc)
{
	int arg_check;
	int last_blank;

	arg_31(*argv);
	arg_check = arg_number(argc);
	last_blank = arg_31(*argv);

	printf("\nel retorno de la funcion arg_number es: %d\n", arg_check);
	printf("el retorno de la funcion arg_31 es: %d\n", last_blank);
	//write (1, &argv[1][28], 1);
	return (0);
}