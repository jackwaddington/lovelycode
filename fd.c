/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:13:39 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/07 20:21:58 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"header.h"
int	main()
{
	int fd;
	char text[] ="test";

	fd = open("file.txt", O_RDWR | O_CREAT | O_APPEND);
	fd_info(fd);
	write(fd, &text, sizeof(text));
	printf("the result of close is %d\n", close(fd));
	return(0);
}

