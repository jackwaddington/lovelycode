/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:13:39 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/05 15:47:34 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>
int	main()
{
	int i;
	int fd;

	printf("The dtable size is %d\nRead more \"man -s2 getddtablesize\"\n\n", getdtablesize());
	/*
	fd = open("file.txt", O_RDONLY | O_CREAT);
	return;
*/
}

