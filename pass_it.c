/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:18:57 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/03 16:17:19 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

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

int	str_copy(char *to, char *from)
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

int	main(void)
{
	char dut[5]	= {'c', 'h', 'i', 'e', '\0'};
	char *left_hand_side;
	int	quantity;
// create a location I can pass to
	left_hand_side = create_dut(dut);
// pass it to that location
	quantity = str_copy(left_hand_side, dut);
// show me you did it
	printf("dut%s\nresult is %d\n", left_hand_side, quantity);
	free(left_hand_side);
}
