/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:41:33 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/06 16:26:23 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_string(char const *s, char c)
{
	int	count_strings;

	count_strings = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
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
	ft_strlcpy(string, start, len + 1);
	string[len] = '\0';
	return (string);
}
static	void	ft_len_substring(char **result, const char *s, char c)
{
	int		count_len;
	unsigned int	start;
	char	*search_string;
	size_t	size;

	count_len = 0;
	search_string = (char *)s;
	while (*search_string != '\0')
	{
		while (*search_string == c)
			search_string++;
		start = search_string - s;
		while (*search_string && *search_string != c)
			search_string++;
		if (search_string - s > start)
		{
			size = (size_t)(search_string - s - start);
			result[count_len] = ft_and_copy(s + start, size);
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
	split = (char **)malloc(len + 1 * sizeof(char *);
	if(!split)
		return (NULL);
	ft_len_substring(split, s, c);
	return (split);
}
