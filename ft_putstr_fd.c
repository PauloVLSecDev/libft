/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:46:39 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/10/30 21:26:11 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_putstr_fd(char *s, int fd)
{
	int	i;

	if(fd == 0 || s == NULL)
		return ;
	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}