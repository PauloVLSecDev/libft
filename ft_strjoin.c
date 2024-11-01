/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:22:29 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/01 15:33:50 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len_s1;
	size_t	len_s2;
	size_t	size;

	if (!s1 && !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	size = len_s1 + len_s2 + 1;
	s3 = (char *)malloc(size * sizeof(char));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, (len_s1 + 1));
	ft_strlcat(s3, s2, size);
	return (s3);
}
