/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:58:29 by leiamart          #+#    #+#             */
/*   Updated: 2024/05/30 19:41:45 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		i += ft_putchar('-');
		i += ft_putnbr(n * -1);
	}
	if (n > 9)
	{
		i += ft_putnbr(n / 10);
		i += ft_putchar (n % 10 + '0');
	}
	else
		i += ft_putchar('0' + n % 10);
	return (i);
}
