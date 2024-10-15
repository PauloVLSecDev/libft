/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:06:52 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/10/15 18:54:56 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*add_b;

	add_b = (unsigned char *) b;

	while (n > 0)
	{
		*(add_b++) = (unsigned char) c;
		n--;
	}
	return ((void *)add_b);
}

int	main(void)
{
	int array[8];
	int i = 0;
	int value = sizeof(array) / sizeof(array[0]);
	ft_memset(array, 'e', value);
	while (i < value)
	{
		printf("%c", array[i]);
		i++;
	}
}
/*
int	main(void)
{

	int array[12];
	int i = 0;
	int len = sizeof(array);
	memset(array, 'c', len);
	while (i < 12)
	{	
		printf("%c", array[i]);
		i++;
	}
}*/
