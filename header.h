/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:43:48 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/15 15:12:12 by jwadding         ###   ########.fr       */
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
	int					no1;
	int					no2;
	int					no3;
	struct	jack_struct	*next;
}				jack_list;

// incrementers
void	ft1(int len, int i);
void	ft2(int len, int i);
void	ft3(int len, int i);
void	ft4(int len, int i);

// file  descriptors
int fd_info(int fd);
int	write_to_a_fd(char *text);
int	read_from_a_fd(int fd);

// str tools
size_t	str_len(char *string);
char *create_dit(char *dut);
int	str_copy(char *from, char *to);
int	str_move(char *from, char *to);


// list tools
jack_list *ft_lstnew(void *content);
jack_list *ft_lstlast(jack_list *node);
jack_list *ft_lstadd_back(jack_list **node, jack_list *new);
#endif
