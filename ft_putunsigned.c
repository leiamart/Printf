/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 21:08:56 by leiamart          #+#    #+#             */
/*   Updated: 2024/05/29 21:39:30 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunsigned(unsigned int n, int *c)
{
	if (n >= 10)
		ft_putunsigned (n / 10, c);
	ft_putchar (n + '0' % 10, c);
}
