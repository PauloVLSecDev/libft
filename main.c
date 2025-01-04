/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 19:44:19 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/01/03 19:57:37 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main (void)
{
	int hexa = 11;
	char *point = "werwer";
	char *string = "so uma stringzinha de leve";
	ft_printf("teste %%\n %d\n %p\n %x\n %s\n ", 3, point, hexa, string );
	return (0);
}
