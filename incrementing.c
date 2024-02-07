/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   incriment_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:50:17 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/07 19:26:59 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// I was interested to behaviour of incrementing from -1 and using ++i

#include <stdio.h>

void	ft1(int len, int i)
{
	while (i < len)
	{
		printf("ft1 int is %d\n", i);
		i++;
	}
}

void	ft2(int	len, int i)
{
	while (i < len)
	{
		printf("ft2 int is %d\n", i);
		++i;
	}
}

void	ft3(int len, int i)
{
	while (++i < len)
	{
		printf("ft3 int is %d\n", i);
	}
}

void	ft4(int len, int i)
{
	while (i++ < len)
	{
		printf("ft4 int is %d\n", i);
	}
}
/*
int	main(void)
{
	int	i = -1;
	int	len = 3;

	printf("i = %d\nlen = %d\n\n", i, len);
	printf("Increment within function i++:\n");
	ft1(len, i);
	printf("\n");
	printf("Increment within function ++i:\n");
	ft2(len, i);
	printf("\n");
	printf("Increment in loop ++i:\n");
	ft3(len, i);
	printf("\n");
	printf("Increment in loop i++:\n");
	ft4(len, i);
}
*/
