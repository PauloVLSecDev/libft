/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:19:10 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/10/30 20:25:24 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;

	dest = (char *)malloc(nmemb * size);
	if (nmemb != 0 && size != 0 && nmemb > (size_t) - 1 / size)
		return (NULL);
	if (dest == NULL)
		return (NULL);
	ft_memset(dest, 0, (nmemb * size));
	return (dest);
}