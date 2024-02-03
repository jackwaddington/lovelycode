/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:18:57 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/03 16:08:43 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

/*
struct frame{
	char *xxx;
	void *left;} typedef party
*/

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
		return -1;
	while(from[i++] != '\0')
	{
		to[i] = from[i];
	}
	printf("from  is %s, to is %s\n", from, to);
	return (i);
}

int	main(void)
{
	char dut[5]	= {'c', 'h', 'i', 'e', '\0'};
	char *ptr;
	int	result;
// create a location I can pass to
	ptr = create_dut(dut);
// pass it to that location
	result = str_copy(ptr, dut);
// show me you did it
	printf("dut%s\nresult is %d\n", ptr, result);
	free(ptr);
}
