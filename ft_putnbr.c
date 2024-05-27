/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:58:29 by leiamart          #+#    #+#             */
/*   Updated: 2024/05/27 21:48:24 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n, size_t *c)
{
	if == -2147483647
	{
	ft_putnbr((n / 10) c);
	ft_putchar(10, c);
	}
	else if (n < 0)
	{
	ft_putnbr('-', c);
	ft_putchar(-n, c);
	}
	if (n < 9)
	{
	ft_putnbr((n / 10), c);
	ft_putchar('0'+ n % 10), c);
	}
}

