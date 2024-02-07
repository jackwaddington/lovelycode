/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:40:20 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/07 19:35:01 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"header.h"
int	fd_info(int fd)
{
	printf("the dtable size is %d\n", getdtablesize());
	printf("this file descriptor is number %d\n\n", fd);
	return (fd);
}
