/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:09:48 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/10/17 19:18:30 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(const char *c);

size_t	ft_strlcpy(char *dest, const char  *str, size_t size )
{
	size_t	count;
	size_t	len;

	count = 0;
	len = ft_strlen(str);

	if( size == 0)
	{
		return (len);
	}
	else if (len >= size -1 )
	{
		while (count < len )
	       	{
			dest[count] = str[count];
			count++;
		}
	}
	else
	{
		while (count > len)
		{
			dest[count] = str[count];
			count++;
		}
	}
	return (len);
}

int	main(void)
{
	char dest[50];
	char *str = "Hello, Word!";

	size_t result = ft_strlcpy(dest, str, 13);

	printf("o valor desse ser este %zu\n", result);
	printf("a string_origining copiada é esta %s\n", dest);
}
