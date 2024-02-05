/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:13:39 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/05 20:46:09 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int	main()
{
	int fd;
	char text[] ="test";

	printf("The dtable size is %d\nRead more \"man -s2 getddtablesize\"\n\n", getdtablesize());

	fd = open("file.txt", O_RDWR | O_CREAT);
	write(fd, &text, sizeof(text));
	printf("the result of close is %d\n", close(fd));
	return(0);
}

