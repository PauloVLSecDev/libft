/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:43:31 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/10/26 19:09:14 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	char		*search;	
	char		*book;

	i = 0;
	search = (char *)little;
	book = (char *)big;

	while (*book != '\0' && i < len - 1)
	{
		while (*search != '\0' && *book == *search)
		{
			*search++ = *book++;
		}
		i++;
	}
	return (search);
}
int	main(void)
{
	char *result = ft_strnstr("a paravra menor deve estar dentro desta daqui", "deve", 20);
	printf("%s\n", result);
}
