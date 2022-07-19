/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print_Matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlo <arlo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:04:52 by arlo              #+#    #+#             */
/*   Updated: 2022/07/09 17:13:48 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void    print_matrix(void)
{
    int i;
    int j;
    int matrix_[4][4];

    i = 0;
    while (i <= 3)
    {
        j = 0;
        while (j <= 3)
        {
            matrix_[i][j] = j;
            printf("%d\t", matrix_[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}


int main(void)
{
    print_matrix();
    return (0);
}