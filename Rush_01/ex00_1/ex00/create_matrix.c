/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:16:05 by arlo              #+#    #+#             */
/*   Updated: 2022/07/10 14:01:11 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

/* the function receives the number array that contains the values 1, 2, 3, 4 and the starts the combination
saving the combination in a new array. Depending on the flag value (given by the calling function), the current
function change the array values between [2] - [3] or [1] - [3]*/

int    create_combination(int *numbers, char *flag)
{
    int save;
    int i;
    //flag = 'a';

    //https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/
    if (*flag == 'a')
    {
        i = 0;
        while (i <= 3)
        {
            //change the order in array *numbers between [2] - [3]
            save = numbers[3];
            numbers[3] = numbers[2];
            numbers[2] = save;
        }
    }
    return (*numbers);
}


/* Creates a matrix with the numbers 1234 in all raws.*/
void    value_matrix(int *numbers)
{
    int i;
    int j;
    int matrix[24][4];
    char *flag;
    *flag = 'a';

    i = 0;
    while (i < 24)
    {
        j = 0;
        while (j < 4)
        {
            //matrix[i][j] = numbers[j]; // call from here to the changed array modified in the create_combination function
            matrix[i][j] = create_combination (numbers, flag);
            printf("%d\t", matrix[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    if (*flag == 'a')
        *flag = 'b';
    else
        *flag = 'a';
}
