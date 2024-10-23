/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:55:52 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/10/22 18:53:05 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *str, size_t len)
{
	char	*temp_d;
	char	*temp_s;
	int		i;

	i = 0;
	temp_d = (char *) dest;
	temp_s = (char *) str;
	if (temp_d == (char *)0 && temp_s == (char *)0)
	{
		while (len > 0)
		{
			temp_d[i] = temp_s[i];
			len--;
		}
	}
	return (dest);
}
