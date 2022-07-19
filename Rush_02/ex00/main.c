/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:34:43 by jsaldana          #+#    #+#             */
/*   Updated: 2022/07/17 13:22:23 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>


int main(int argc, char *argv[])
{
	int				fd;
	int				count;
	int				i;
	int				count_arg;
	char			buffer[1000];
	char			*str;

	count = 0;
	i = 0;
	count_arg = 0;
	str = malloc(sizeof(char*));
	fd = open("./numbers.dict", O_RDONLY);
	/* if(argv[1][count] == '4')
		printf("four");
	// ft_check_input();
	read(fd, buffer, 4096);
	printf("%d", fd); */ 
	if (argc < 1 || argc > 3  || (argv[1]< '0' && argv[1] > '9') || argv[1] > 2147483647)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	while (read(fd, &buffer[count], 1) || argv[1][count_arg])
	{
		count++;
		count_arg++;
	}
	close(fd);
	return (0);
}
