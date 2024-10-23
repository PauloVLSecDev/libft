/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:55:52 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/10/23 19:12:42 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *str, size_t len)
{
	unsigned char		*temp_d;
	const unsigned char	*temp_s;
	size_t				i;

	i = 0;
	temp_d = (unsigned char *) dest;
	temp_s = (const unsigned char *) str;
	if (temp_d == NULL && temp_d == NULL)
	{
		return (NULL);
	}
	while (len > i)
	{
		temp_d[i] = temp_s[i];
		i++;
	}
	if ((temp_d > temp_s) && temp_d < (temp_s + len))
	{
		while (len > 0)
		{
			temp_d[len - 1] = temp_s[len - 1];
			len--;
		}
	}
	return (dest);
}
