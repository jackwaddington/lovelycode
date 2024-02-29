/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:18:57 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/15 15:12:52 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

size_t str_len(char *string)
{
	int len;
	
	len = 0;
	while (string[len] != '\0')
		len++;
	return len;
}

char *create_dut(char *dut)
{
	size_t len;
	char *rtn;

	len = 0;
	len = str_len(dut);
	rtn = malloc((sizeof(char)+1) * (len + 1));
	return (rtn);
}

int	str_copy(char *from, char *to)
{
	int i;
	
	i = -1;
	if(!from)
		return (i);
	while(from[i++] != '\0')
	{
		to[i] = from[i];
	}
	return (i);
}

int str_move(char *from, char *to)
{
	int i;

	i = -1;
	if(!from || !to)
		return (i);
	while(from[++i] != '\0')
	{
		to[i] = from[i];
		from[i] = 0;
	}
	return (i);
}
/*
int	main(void)
{
	char dut[5]	= {'c', 'h', 'i', 'e', '\0'};
	char *left_hand_side;
	int	quantity;
// create a location I can pass to
	left_hand_side = create_dut(dut);
	printf("dut%s\nresult is %d\n", dut, quantity);
// pass it to that location
// pass it to that location
	quantity = str_move(dut, left_hand_side);
// show me you did it
	printf("from dut%s\nresult is %d\n", dut, quantity);
	printf("from LHS dut%s\nresult is %d\n", left_hand_side, quantity);
// pass it to that location
	free(left_hand_side);
}

*/
