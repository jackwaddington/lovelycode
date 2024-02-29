/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:40:20 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/15 21:16:38 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"header.h"
int	fd_info(int fd)
{
	printf("the dtable size is %d\n", getdtablesize());
	printf("this file descriptor is number %d\n\n", fd);
	return (fd);
}

int	write_to_a_fd(char *s)
{
	int fd;

	fd = open("file.txt", O_RDWR | O_CREAT | O_APPEND, 0700);
	fd_info(fd);
	write(fd, &s, sizeof(s));
	return (fd);
}
