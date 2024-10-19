/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:09:48 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/10/18 17:12:44 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(const char *c);

size_t	ft_strlcpy(char *dest, const char *str, size_t size)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = ft_strlen(str);
	if (size == 0)
	{
		return (len);
	}
	while (count < size -1 && str[count] != '\0')
	{
		dest[count] = str[count];
		count++;
	}
	return (len);
}
