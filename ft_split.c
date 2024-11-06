/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:41:33 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/06 15:45:40 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_string(char const *s, char c)
{
	unsigned int	count_strings;

	count_strings = 0;
	if (!s)
		return (NULL);
	while (*localize_string)
	{
		if (*s != c && (*(s + 1 == c)) || *s + 1 == '\0')
			count_strings++;
		s++;
	}
	return (count_strings);
}

static	char	*ft_and_copy(const char *start, size_t len)
{
	char	*string;

	string = (char *)malloc(len + 1);
	if(!string)
		return (NULL);
	ft_substr(string, start, len + 1);
	return (string);
}
static	void	ft_len_substring(char const **result, const char *s, char c)
{
	int		count_len;
	unsigned int	start;
	char	*localize_string;

	count_len = 0;
	locatlize_string = (char *)s;
	while (*localize_string != '\0')
	{
		while (*localize_string == c)
			localize_string++;
		start = localize_string - s;
		while (*localize_string && localize_string != c)
		{
			localize_string++;
		}
		if (localize_string - s > start)
		{
			result[count_len] = ft_and_copy(s + start. localize_string - s - start);
			count_len++;
		}
	}
}
char	**ft_split(char const *s, char c)
{
	char	**split;
	int	len;

	if(!s)
		return (NULL);
	len = ft_count_string(s, c);
	split = (char **)malloc(len + 1 * sizeof(char *));
	if(!split)
		return (NULL);
	ft_len_substring(split, s, c);
	return (split);
}
