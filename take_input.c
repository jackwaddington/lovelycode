/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:54:56 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/08 17:23:41 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"header.h"
/*
int	main(arg c, arg v)
{
	take input
		pass it around
		change it
		store it
		update through process with printf

	int	fd;
	
	fd = 0;
	fd = write_to_fd(*argxxxxx);
	fd_info(fd);
}
*/

int main(void)
{
	int fd;

	char   	string[] = "hello";
	printf("Welcome. Our test string is %s\n", string);
	fd_info(0);
	printf("\nNow we pass it to a file\n");
	fd = write_to_a_fd(string);
	fd_info(fd);
	printf("Can we now put some stuff in the file?\n");
	
}

