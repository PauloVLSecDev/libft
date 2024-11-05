/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:41:33 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/05 19:36:43 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_array(char const *s, char c)
{
	unsigned int	count_strings;

	count_strings = 0;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s != c && (*s + 1 == c) || *s + 1 == '\0')
			count_strings++;
		s++;
	}
	return (count_strings);
}

static	ft_copy_substring(const char s, char c)
{
	int	index;
	int	len_sub;	
	
	while (*s)
	{
		while (*s == c && *s)	
		{
			index++;
		}
		while (*s != c *s)
		{
			len_sub++;		
			s++;
		}
		if (len_sub)
		{
				
		}
	}
}
char	**ft_split(char const *s, char c)
{
	char	**split;
	int	count;
	int	i;
	int	len

	if(!s)
		return (NULL);
	len = len_count_delimiter(s, c);
	split = (char **)ft_calloc(len + 1, sizeof(char *));
	if(!split)
		return (NULL);
	i = 0;
	count = ft_count_array(s, c);
		split[i] = ft_();
		i++;
	}
}
