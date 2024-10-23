/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:21:28 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/10/22 14:35:45 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		len;
	size_t		j;

	i = 0;
	j = 0;
	len = ft_strlen(src);
	while (dest[i] != '\0')
	{
		i++;
	}
	if (size == 0)
	{
		return (i + len);
	}
	while (src[i] != '\0' && (j < size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + len);
}
