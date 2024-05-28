/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:58:29 by leiamart          #+#    #+#             */
/*   Updated: 2024/05/28 21:16:14 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n, size_t *c)
{
	if == -2147483648
	{
		write(1,"-2147483648",11)
	*c += 11;
	}
	if (n < 0)
	{
	ft_putchar('-',c);
	ft_putnbr(n * -1, c);
	}
	else
	if (n < 9)
	ft_putnbr(n / 10 , c);
	ft_putchar('0'+ n % 10 , c);
	}
}

