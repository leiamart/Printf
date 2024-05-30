/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:57:16 by leiamart          #+#    #+#             */
/*   Updated: 2024/05/29 21:38:44 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
	return (i);
}
