/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:32:19 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/10/18 21:05:30 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	char const *dest;

	i = 0;
	dest = NULL;
       	while (*str != '\0')
	{
		if(*str== (char)c)
		{
			dest = str;
		}
		str++;
	}
	if(c == '\0')
	{
		return (char *)str;
	}
	return (char *)dest; 
}
int	main()
{
	char *string = "quero pegar o primeiro b menos um";
	char *result = ft_strrchr(string, 'a');
	printf("%s\n", result);
}
