/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:43:48 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/07 19:28:26 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HEADER_H
# define LIBFT_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

typedef struct jack_struct
{
	void				*content;
	struct	jack_struct	*next;
}				jack_list;

int fd_info(int fd);
void	ft1(int len, int i);
void	ft2(int len, int i);
void	ft3(int len, int i);
void	ft4(int len, int i);
#endif
