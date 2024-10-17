/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:55:52 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/10/17 16:48:58 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, void *str, size_t len)
{
	char *temp_d;
	char *temp_s;
	int	i;

	i = 0;
	temp_d = (char *) dest;
	temp_s = (char *) str;

	if (temp_d == (char *)0 && temp_s == (char *)0)
	{
		while (len > 0)
	}
}
